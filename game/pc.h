#pragma once
#include "character.h"
#include <string>
using namespace std;
class pc : public character
{
public:
	
	pc( int hp=0, int attack=0, int def=0) {};

	virtual ~pc();
	virtual void what_am_i();
	virtual void add_gold();
	int _hp, _attack, _def,_gold;
	
protected:
	int _gold, _maxHP;
	string _race;
};

