// �������������2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Person.h"
#include "Rabochi.h"
#include "Student.h"
#include "Inzhener.h"
#include "Tokar.h"
#include "Sluzachi.h"
#include "locale"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	Person Alexandr;
	Alexandr.setname("���������");
	Alexandr.getname();
	cout << endl;

	Rabochi Mihail;
	Mihail.setname("������ �������");
	Mihail.getname();
	Mihail.setzarplata(1800000);
	Mihail.getzarplata();
	cout << endl;
	
	Student Mihaili;
	Mihaili.setname("����� �������");
	Mihaili.getname();
	Mihaili.setkof(5);
	Mihaili.getkof();
	cout << endl;

	Student* f5 = new Student(&Mihail);
	f5->setname("������ �������");
	f5->getname();
	f5->Infa->setzarplata(20000);
	f5->Infa->getzarplata();
	f5->setkof(6);
	f5->getkof();
	cout << endl;

	Tokar e;
	e.setname("������ ������");
	e.getname();
	e.setzarplata(300000);
	e.getzarplata();
	e.setstaz(2);
	e.getstaz();
	cout << endl;

	Inzhener d;
	d.setname("����� �������� ��������");
	d.getname();
	d.setzarplata(2300000);
	d.getzarplata();
	d.setstaz(3);
	d.getstaz();
	cout << endl;

	Sluzachi f;
	f.setname("����");
	f.getname();
	f.setzarplata(1500000);
	f.getzarplata();
	f.setstaz(4);
	f.getstaz();
	cout << endl;

	cout << endl;
	return 0;
}