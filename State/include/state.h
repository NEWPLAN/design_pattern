#ifndef __STATE_H__
#define __STATE_H__

class War;

class State
{
public:
  virtual void Prophase() {}
  virtual void Metaphase() {}
  virtual void Anaphase() {}
  virtual void End() {}
  virtual void CurrentState(War *war) {}
  virtual ~State() {}
};

//ending state
class EndState : public State
{
public:
  void End(War *war); //action when ending
  void CurrentState(War *war);
};

//final state
class AnaphaseState : public State
{
public:
  void Anaphase(War *war); //action in final state
  void CurrentState(War *war);
};
//Meta phase
class MetaphaseState : public State
{
public:
  void Metaphase(War *war); //action in meta state
  void CurrentState(War *war);
};
//initial phase
class ProphaseState : public State
{
public:
  void Prophase(War *war); //action in initial state
  void CurrentState(War *war);
};

#endif // __STATE_H__