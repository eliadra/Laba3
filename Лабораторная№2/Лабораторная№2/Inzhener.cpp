#include "StdAfx.h"
#include <iostream>
#include "Inzhener.h"
using namespace std;

Inzhener::Inzhener(void)
{	cout << "���������� ����������� ��������" << endl; }

void Inzhener::setstaz (int x)
{	this->staz = x; }

void Inzhener::getstaz()
{	cout << "���� ������: " << this->staz << endl; }

Inzhener::~Inzhener()
{	cout << "���������� ���������� ��������" << endl; }
