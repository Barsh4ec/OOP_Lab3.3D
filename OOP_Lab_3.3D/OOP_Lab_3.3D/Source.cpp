#include <iostream>
#include <Windows.h>
#include "Fraction_public.h"
#include "Fraction_private.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Fraction_public a, b;
	cin >> a;
	cin >> b; cout << endl;
	cout << a;
	cout << b;
	if (a < b == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (a <= b == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (a > b == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (a >= b == true)
		cout << "����� ����� ����� ��� ���� �������" << endl; 
	if (a == b == true)
		cout << "����� � ����� ����� ����" << endl;
	if (a != b == true)
		cout << "����� � ����� ����� �� ����" << endl;

	cout << "��� ��������� ������������:" << endl;
	Fraction_private x, y;
	cin >> x;
	cin >> y; cout << endl;
	cout << x;
	cout << y;
	if (x < y == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (x <= y == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (x > y == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (x >= y == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (x == y == true)
		cout << "����� � ����� ����� ����" << endl;
	if (x != y == true)
		cout << "����� � ����� ����� �� ����" << endl;
	return 0;
}