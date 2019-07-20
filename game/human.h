#pragma once
#include "pc.h"
#include <string>
using namespace std;
class human : public pc
{
public:
	human( int hp, int attack, int def, int gold);
	~human();
	void what_am_i();

};

