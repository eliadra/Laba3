#include "StdAfx.h"
#include "Rabochi.h"
#include <iostream>
using namespace std;

Rabochi::Rabochi(void)
{ 	cout << "вызывается конструктор рабочего" << endl; }

void Rabochi::setzarplata(int zarplata)
{	this->zarplata = zarplata; }

void Rabochi::getzarplata()
{	cout << "зарплата рабочего: " << this->zarplata << endl; }

Rabochi::~Rabochi(void)
{	cout << "вызывается деструктор рабочего" << endl; }