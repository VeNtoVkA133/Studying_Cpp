#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	double y;
	double d;
	double d1;
	double d2;
	double dd;
	int nd;
	double e = exp(1);

	HANDLE Yellow = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(Yellow, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "���������� = ";
	cout << e << endl;

	SetConsoleTextAttribute(Yellow, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "�������: ";
	SetConsoleTextAttribute(Yellow, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "��������� �������� ��������������� ���������. ";
	SetConsoleTextAttribute(Yellow, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "x, y - �������� ������" <<endl;
	SetConsoleTextAttribute(Yellow, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	cout << "������� �������� X..." << endl;
	cin >> x;
	cout << endl;

	cout << "������� �������� Y..." << endl;
	cin >> y;
	cout << endl;

	d = (x * pow(e, x * y) + 8 * pow(sin(x), 2))/(x*(x-y)*(3*x+y));

	cout << "d = ";
	cout << d << endl;

	d1 = x*pow(e,x*y)+8*pow(sin(x),2);
	d2 = x * (x - y) * (3 * x + y);
	dd = d1 / d2;

	cout << "dd = ";
	cout << dd << endl;
	cout << endl;

	SetConsoleTextAttribute(Yellow, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "�������: ";
	SetConsoleTextAttribute(Yellow, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << "������������� ������������ ������ � �����.";
	SetConsoleTextAttribute(Yellow, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << "([*] - ����� ����� �����)" << endl;
	SetConsoleTextAttribute(Yellow, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


	cout << "m = ";
	cout << d << endl;

	nd = d1 / d2;
	cout << "n = ";
	cout << nd << endl;
	system("pause");
}
