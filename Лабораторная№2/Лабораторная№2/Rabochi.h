#pragma once
#include "person.h"
class Rabochi: 
	public Person
{ 
	int zarplata;
public:
	Rabochi(void);
	void setzarplata(int x);
	void getzarplata();
	~Rabochi(void);
};