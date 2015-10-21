#pragma once
#include "rabochi.h"
class Sluzachi :
	public Rabochi
{
	int staz;
public:
	Sluzachi(void);
	void setstaz(int x);
	void getstaz();
	~Sluzachi(void);
};