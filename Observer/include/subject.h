#ifndef __SUBJECT_H__
#define __SUBJECT_H__

class IObserver;

// abstract subject
class ISubject
{
  public:
    virtual void Attach(IObserver *) = 0; // register observer
    virtual void Detach(IObserver *) = 0; // unregister observer
    virtual void Notify() = 0;            // notify observer
    virtual ~ISubject(){};
};

#endif // __SUBJECT_H__