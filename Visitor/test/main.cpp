#include <iostream>
#include <list>
#include <string>

using namespace std;

class CPerson;
class CStudent;
class CTeacher;

class CVisitor;
class CPrinter;

//element to be visited
class CPerson //pure virtual class
{
  protected:
    string name;
    int gender;

    CPerson() {}

  public:
    virtual void Accept(CVisitor &) //= 0;
    {
    }

  public:
    void SetName(const string &Name)
    {
        name = Name;
    }

    string GetName() const
    {
        return name;
    }

    void SetGender(const int &Gender)
    {
        gender = Gender;
    }

    int GetGender() const
    {
        return gender;
    }
};

//visitor
class CVisitor
{
  public:
    virtual void Visit(CStudent &) = 0;
    virtual void Visit(CTeacher &) = 0;
};

//concrete element
class CStudent : public CPerson
{
  private:
    int grade; //grade
  public:
    CStudent(string Name, int Gender, int Grade)
    {
        name = Name;
        gender = Gender;
        grade = Grade;
    }

  public:
    virtual void Accept(CVisitor &printer) //virtual function
    {
        printer.Visit(*this);
    }

    void SetGrade(int Grade)
    {
        grade = Grade;
    }

    int GetGrade() const
    {
        return grade;
    }
};

//concrete element
class CTeacher : public CPerson
{
  private:
    int service_time; //work year
  public:
    CTeacher(string Name, int Grade, int ServiceTime)
    {
        name = Name;
        gender = Grade;
        service_time = ServiceTime;
    }

  public:
    virtual void Accept(CVisitor &printer)
    {
        printer.Visit(*this);
    }

    void SetServiceTime(int ServiceTime)
    {
        service_time = ServiceTime;
    }

    int GetServiceTime() const
    {
        return service_time;
    }
};

//concrete visitor
//here, this class print all elements, according to the requirements.
//it is a method to create the visitor without modifing the one to be visited.
class CPrinter : public CVisitor
{
  public:
    void Visit(CStudent &s)
    {
        cout << "student:" << endl;
        cout << "\t Name:" << s.GetName() << endl;
        if (s.GetGender() == 0)
            cout << "\t Gender:"
                 << "female" << endl;
        else
            cout << "\t Gender:"
                 << "male" << endl;
        cout << "\t Grade:" << s.GetGrade() << endl;
    }

    void Visit(CTeacher &t)
    {
        cout << "Teacher:" << endl;
        cout << "\t Name:" << t.GetName() << endl;
        if (t.GetGender() == 0)
            cout << "\t Gender:"
                 << "female" << endl;
        else
            cout << "\t Gender:"
                 << "male" << endl;
        cout << "\t Service Time:" << t.GetServiceTime() << endl;
    }
};

//objection, Organization is a group, contains several teacher and student
class Organization
{
  private:
    typedef list<CPerson *> CMemberList;
    CMemberList member_list;

  public:
    void Add(CPerson *person) //add person
    {
        //notify: here person must be new allocated.
        member_list.push_back(person);
    }

    void PrintMembers(CPrinter &printer) //print all elements
    {
        CMemberList::iterator itr = member_list.begin();
        for (; itr != member_list.end(); ++itr)
        {
            (*itr)->Accept(printer);
        }
    }

    ~Organization()
    {
        //release the allocation.
        CMemberList::iterator itr = member_list.begin();
        for (; itr != member_list.end(); ++itr)
        {
            delete *itr;
        }
    }
};

int main()
{
    Organization Planting; //planting organization
    Planting.Add(new CTeacher("Johnny", 1, 10));
    Planting.Add(new CStudent("Catherine", 0, 1));
    Planting.Add(new CStudent("peter", 1, 2));

    CPrinter printer; //visitor
    Planting.PrintMembers(printer);

    return 0;
}