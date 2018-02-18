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
	cout << "расстояние между точками составляет: " << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) << " см\n\n";
	return 0;
}

//будет вычислять произведение
int f(int a, int b)
{
	cout << "произведение этих чисел: " << a * b << endl << endl;
	return 0;
}

//будет вычислять сумму
int f(int a, int b, int c, int d)
{
	cout << "сумма этих чисел: " << a + b + c + d << endl << endl;
	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "после действия функции a = " << *a << ", b = " << *b << endl;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "после действия функции a = " << a << ", b = " << b << endl;
}