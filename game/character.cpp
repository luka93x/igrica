#include "pch.h"
#include "character.h"


character::character(int hp,int att,int def):_hp(hp),_att(att),_def(def)
{
}



character::~character()
{
}

void character::setHP(int hp) {
	_hp = hp;
}
void character::setATT(int att) {
	_att = att;
}
void character::setDEF(int def) {
	_def = def;
}
int character::getHP(){
	return _hp;
}
int character::getATT() {
	return _att;
}
int character::getDEF() {
	return _def;
}