#pragma once
#include "Displayble.h"
class character : public Displayble
{
	
public:
	character(int hp=0,int att=0,int def=0);
	virtual ~character()= 0;
	virtual void setHP(int hp);
	virtual void setATT(int att);
	virtual void setDEF(int def);
	virtual int getHP();
	virtual int getATT();
	virtual int getDEF();
	
protected:
	int _hp, _def, _att;
};

