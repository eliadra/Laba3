#pragma once
#include "rabochi.h"
class Tokar :
	public Rabochi
{
	int staz;
public:
	Tokar(void);
	void setstaz(int x);
	void getstaz();
	~Tokar(void);
};