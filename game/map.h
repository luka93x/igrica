#pragma once
#include "Displayble.h"
#include<iostream>
#include "character.h"
using namespace std;
class map
{
public:
	map();
	~map();
	int x, y; // kordinate
	void spawn(int x, int y);
	Displayble* mapa[79][25];
	void printMap() {
		mapa[3][3] = new character(2, 2, 2);
		for (int i = 0; i < 79; i++) {
			for (int j = 0; j < 25; j++) {
				cout << mapa[i][j]->getDisplayChar();
			}
			cout << endl;
		}
	}
	
};


