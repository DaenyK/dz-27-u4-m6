#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std;

int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{

		case 1:
		{
			cout.precision(4);

			cout << "Определите функцию double f(double x, double y), которая вычисляет" << endl
				<< "и возвращает длину гипотенузы прямоугольного треугольника, когда две" << endl
				<< "другие стороны x и y известны\n\n";

			double x = (5.5 + rand() % 7) / 5.5 + rand() % 7, y = (5.5 + rand() % 7) / 5.5 + rand() % 7;

			cout << "рандомно-сгенерированные катеты прямоугольного треугольника: " << x << " и " << y << endl;

			double result = hypotenuse(&x, &y);

			cout << result << " - гипотенуза\n\n";

		}break;

		case 2:
		{
			cout.precision(2);
			cout << "Напишите функцию double f(double x1, double y1, double x2, double y2)," << endl
				<< "которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2).\n\n";

			double x1 = (-5.2 + rand() % 11)/( -5.2 + rand() % 11), y1 = (-5.2 + rand() % 11) / (-5.2 + rand() % 11);
			double x2 = (-5.2 + rand() % 11) / (-5.2 + rand() % 11), y2 = (-5.2 + rand() % 11) / (-5.2 + rand() % 11);
			cout << "координаты точек будут сгенерированы рандомно:" << endl
				<< "A(" << x1 << "," << y1 << "); \n"
				<< "B(" << x2 << "," << y2 << ");\n";

			distanceBetween2points(x1, y1, x2, y2);
		}break;

		case 3:
		{
			cout << "Напишите несколько функций с одним именем int f(…) и с разными " << endl
				<< "наборами параметров. Продемонстрируйте работу перегруженных функций\n\n";
			int a = 5, b = 2, c = 3, d = 4;
			cout << "даны параметры: " << a << ", " << b << ", " << c << ", " << d << endl << endl;
			cout << "используем первую функцию с именем f с параметрами (a, b), \nкоторая вычисляет произведение\n";
			f(a, b);

			cout << "используем вторую функцию с именем f с параметрами (a, b, c, d), \nкоторая вычисляет произведение\n";
			f(a, b, c, d);

		}break;

		case 4:
		{
			cout << "Напишите функцию swap(int* a, int* b), которая изменяет значения " << endl
				<< "параметров a и b так, что новое значение a равно старому значению b" << endl
				<< "и наоборот.\n\n";
			int a = rand() % 10, b = rand() % 10;
			cout << "даны два значения a = " << a << ", b = " << b << endl;
			swap(&a, &b);
		}break;

		case 5 :
		{
			cout << "Напишите функцию swap(int& a, int& b), которая изменяет значения " << endl
				<< "параметров a и b так, что новое значение a равно старому значению b" << endl
				<< "и наоборот.\n\n";
			int a = rand() % 10, b = rand() % 10;
			cout << "даны два значения a = " << a << ", b = " << b << endl;
			swap(a, b);
		}break;

		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
		{
			cout << "ошибка" << endl;
		}
		}
	} while (nz > 0);


}

