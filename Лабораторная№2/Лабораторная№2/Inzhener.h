#pragma once
#include "rabochi.h"
class Inzhener :
	public Rabochi
{
	int staz;
public:
	Inzhener(void);
	void setstaz(int x);
	void getstaz();
	~Inzhener(void);
};