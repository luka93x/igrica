#include "pch.h"
#include "map.h"


map::map()
{
}


map::~map()
{
}
char mapa[10][10]{
	"|-------|",
	"|-------|",
	"|-------|",
	"|-------|",
	"|-------|",
	"|-------|",
	"|-------|",
	"|-------|",
	"|-------|",
	"|-------|"

};
void spawn(int x, int y) {
	if (mapa[x][y] =='-')
	mapa[x][y] == '@'; }