#include<iostream>
#include "Algoritm.h"
#include "Support.h"

using namespace std;

int main()
{
	setlocale(0, "");
	const int m = 2147483647; 

	cout << "�����i�� ���� i� 10 ��������i� �������i� ���������������� �����: " << endl;
	cout << "1 - �i�i���� ������������ �����" << endl;
	cout << "2 - ������������ ������������ �����" << endl;
	cout << "3 - ����� �i�����i" << endl;
	cout << "4 - �������� ����������� ����i����i���" << endl;
	cout << "5 - ����� ��'�������" << endl;
	cout << "6 - ������� '3 �i���'" << endl;
	cout << "7 - ����� �������� ���������" << endl;
	cout << "8 - ����� ��i��i�������" << endl;
	cout << "9 - ����� ��������� ��� ����������� ���������� ������i��" << endl;
	cout << "10- ����� ������ ��� ����������� �����-������i��" << endl;
	cout << "��� ������ ������i�� '0'." << endl;

	int alg;
	cin >> alg;	
	while (0<alg && alg<11) {
	int k = 1000;
	switcher(alg, m, k);
	cin >> alg;
	}

	system("pause");
	return 0;
}
