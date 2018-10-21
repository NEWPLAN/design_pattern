#ifndef __OBSERVER_H__
#define __OBSERVER_H__

// abostract observer interface
class IObserver
{
  public:
    virtual void Update(float price) = 0; // update price
    virtual ~IObserver() {}
};

#endif // __OBSERVER_H__