#include "StdAfx.h"
#include "Rabochi.h"
#include <iostream>
using namespace std;

Rabochi::Rabochi(void)
{ 	cout << "���������� ����������� ��������" << endl; }

void Rabochi::setzarplata(int zarplata)
{	this->zarplata = zarplata; }

void Rabochi::getzarplata()
{	cout << "�������� ��������: " << this->zarplata << endl; }

Rabochi::~Rabochi(void)
{	cout << "���������� ���������� ��������" << endl; }