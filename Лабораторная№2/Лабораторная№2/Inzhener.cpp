#include "StdAfx.h"
#include <iostream>
#include "Inzhener.h"
using namespace std;

Inzhener::Inzhener(void)
{	cout << "вызывается конструктор инженера" << endl; }

void Inzhener::setstaz (int x)
{	this->staz = x; }

void Inzhener::getstaz()
{	cout << "стаж работы: " << this->staz << endl; }

Inzhener::~Inzhener()
{	cout << "вызывается деструктор инженера" << endl; }
