#include "StdAfx.h"
#include "person.h"
#include <iostream>
using namespace std;

Person::Person(void)
{	cout << "���������� ����������� �������" << endl; }

void Person::setname(char *name)
{	this->name = name; }

void Person::getname()
{	cout << "��� �������: " << this->name << endl; }

Person::~Person(void)
{	cout << "���������� ���������� �������" << endl; }