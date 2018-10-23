#ifndef __REAL_STAR_H_
#define __REAL_STAR_H_
#include "star.h"
#include <string>

class RealStar : public Star
{
  public:
    explicit RealStar(std::string name);
    virtual void singe(void) override;
    virtual void sign_contect(void) override;
    virtual void book_ticket(void) override;
    virtual void collect_money(void) override;
    virtual ~RealStar();

  private:
    std::string _name;
};

class ProxyStar : public Star
{
  public:
    explicit ProxyStar(std::string name);
    virtual ~ProxyStar();

    virtual void sign_contect(void) override;
    virtual void book_ticket(void) override;
    virtual void singe(void) override;
    virtual void collect_money(void) override;

    void serve_star(RealStar astr);

  private:
    std::string _name;
    RealStar *_str;
};

#endif