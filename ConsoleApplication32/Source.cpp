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
		cout << "������� ����� �������: ";
		cin >> nz;
		switch (nz)
		{

		case 1:
		{
			cout.precision(4);

			cout << "���������� ������� double f(double x, double y), ������� ���������" << endl
				<< "� ���������� ����� ���������� �������������� ������������, ����� ���" << endl
				<< "������ ������� x � y ��������\n\n";

			double x = (5.5 + rand() % 7) / 5.5 + rand() % 7, y = (5.5 + rand() % 7) / 5.5 + rand() % 7;

			cout << "��������-��������������� ������ �������������� ������������: " << x << " � " << y << endl;

			double result = hypotenuse(&x, &y);

			cout << result << " - ����������\n\n";

		}break;

		case 2:
		{
			cout.precision(2);
			cout << "�������� ������� double f(double x1, double y1, double x2, double y2)," << endl
				<< "������� ��������� ���������� ����� ����� ������� (xl, yl) � (x2, y2).\n\n";

			double x1 = (-5.2 + rand() % 11)/( -5.2 + rand() % 11), y1 = (-5.2 + rand() % 11) / (-5.2 + rand() % 11);
			double x2 = (-5.2 + rand() % 11) / (-5.2 + rand() % 11), y2 = (-5.2 + rand() % 11) / (-5.2 + rand() % 11);
			cout << "���������� ����� ����� ������������� ��������:" << endl
				<< "A(" << x1 << "," << y1 << "); \n"
				<< "B(" << x2 << "," << y2 << ");\n";

			distanceBetween2points(x1, y1, x2, y2);
		}break;

		case 3:
		{
			cout << "�������� ��������� ������� � ����� ������ int f(�) � � ������� " << endl
				<< "�������� ����������. ����������������� ������ ������������� �������\n\n";
			int a = 5, b = 2, c = 3, d = 4;
			cout << "���� ���������: " << a << ", " << b << ", " << c << ", " << d << endl << endl;
			cout << "���������� ������ ������� � ������ f � ����������� (a, b), \n������� ��������� ������������\n";
			f(a, b);

			cout << "���������� ������ ������� � ������ f � ����������� (a, b, c, d), \n������� ��������� ������������\n";
			f(a, b, c, d);

		}break;

		case 4:
		{
			cout << "�������� ������� swap(int* a, int* b), ������� �������� �������� " << endl
				<< "���������� a � b ���, ��� ����� �������� a ����� ������� �������� b" << endl
				<< "� ��������.\n\n";
			int a = rand() % 10, b = rand() % 10;
			cout << "���� ��� �������� a = " << a << ", b = " << b << endl;
			swap(&a, &b);
		}break;

		case 5 :
		{
			cout << "�������� ������� swap(int& a, int& b), ������� �������� �������� " << endl
				<< "���������� a � b ���, ��� ����� �������� a ����� ������� �������� b" << endl
				<< "� ��������.\n\n";
			int a = rand() % 10, b = rand() % 10;
			cout << "���� ��� �������� a = " << a << ", b = " << b << endl;
			swap(a, b);
		}break;

		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
		{
			cout << "������" << endl;
		}
		}
	} while (nz > 0);


}

