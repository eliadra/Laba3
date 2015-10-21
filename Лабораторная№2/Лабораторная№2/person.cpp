#include "StdAfx.h"
#include "person.h"
#include <iostream>
using namespace std;

Person::Person(void)
{	cout << "вызывается конструктор персоны" << endl; }

void Person::setname(char *name)
{	this->name = name; }

void Person::getname()
{	cout << "имя персоны: " << this->name << endl; }

Person::~Person(void)
{	cout << "вызывается деструктор персоны" << endl; }