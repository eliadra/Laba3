#include "StdAfx.h"
#include <iostream>
#include "Tokar.h"
using namespace std;

Tokar::Tokar(void)
{
	cout << "вызывается конструктор токаря" << endl;
}

void Tokar::setstaz(int x)
{
	this->staz = x;
}

void Tokar::getstaz()
{
	cout << "стаж работы: " << this->staz << endl;
}

Tokar::~Tokar()
{
	cout << "вызывается деструктор токаря" << endl;
}