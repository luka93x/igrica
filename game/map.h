#pragma once
#include "Displayble.h"
class map
{
public:
	map();
	~map();
	int x, y; // kordinate
	void spawn(int x, int y);
	Displayble* mapa[79][25];
	
};


