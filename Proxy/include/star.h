#ifndef __STAR_H_
#define __STAR_H_

class Star //infetface to sign
{
  public:
	virtual void sign_contect(void) = 0;
	virtual void book_ticket(void) = 0;
	virtual void singe(void) = 0;
	virtual void collect_money(void) = 0;
};

#endif