#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std;


double hypotenuse(double *a, double *b)
{
	double h = sqrt(pow(*a, 2) + pow(*b, 2));
	return h;
}

double distanceBetween2points(double x1, double y1, double x2, double y2)
{
	cout << "���������� ����� ������� ����������: " << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) << " ��\n\n";
	return 0;
}

//����� ��������� ������������
int f(int a, int b)
{
	cout << "������������ ���� �����: " << a * b << endl << endl;
	return 0;
}

//����� ��������� �����
int f(int a, int b, int c, int d)
{
	cout << "����� ���� �����: " << a + b + c + d << endl << endl;
	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "����� �������� ������� a = " << *a << ", b = " << *b << endl;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "����� �������� ������� a = " << a << ", b = " << b << endl;
}