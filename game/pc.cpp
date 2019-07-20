#include "pch.h"
#include "pc.h"



pc::pc(int hp, int att, int def) : character(hp,att,def),_gold(0),_maxHP(hp) {};

pc::~pc()
{
}
