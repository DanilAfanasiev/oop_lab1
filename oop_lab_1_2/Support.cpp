#include<iostream>
#include "Algoritm.h"
#include "Support.h"
using namespace std;

void switcher(int alg, int m, int k)
{
	switch (alg)
	{
	case 1:
		Table1(m, k);
		break;
	case 2:
		Table2(m, k);
		break;
	case 3:
		Table3(m, k);
		break;
	case 4:
		Table4(m, k);
		break;
	case 5:
		Table5(m, k);
		break;
	case 6:
		Table6(k);
		break;
	case 7:
		Table7(k);
		break;
	case 8:
		Table8(k);
		break;
	case 9:
		Table9(k);
		break;
	case 10:
		Table10(k);
		break;
	default:
		cout << "завершення програми "<< endl;
		break;
	}
}

void buildTable(double x0, double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, int k)
{
	cout << "[0.0,0.1)   " << x0 / k << endl;
	cout << "[0.1,0.2)   " << x1 / k << endl;
	cout << "[0.2,0.3)   " << x2 / k << endl;
	cout << "[0.3,0.4)   " << x3 / k << endl;
	cout << "[0.4,0.5)   " << x4 / k << endl;
	cout << "[0.5,0.6)   " << x5 / k << endl;
	cout << "[0.6,0.7)   " << x6 / k << endl;
	cout << "[0.7,0.8)   " << x7 / k << endl;
	cout << "[0.8,0.9)   " << x8 / k << endl;
	cout << "[0.9,1]     " << x9 / k << endl;
}

void buildTable2(double x0, double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, int k)
{
	cout << "[-3,-2.4)   " << x0 / k << endl;
	cout << "[-2.4,-1.8)   " << x1 / k << endl;
	cout << "[-1.8,-1.2)   " << x2 / k << endl;
	cout << "[-1.2,-0.6)   " << x3 / k << endl;
	cout << "[-0.6,0)   " << x4 / k << endl;
	cout << "[0,0.6)   " << x5 / k << endl;
	cout << "[0.6,1.2)   " << x6 / k << endl;
	cout << "[1.2,1.8)   " << x7 / k << endl;
	cout << "[1.8,2.4)   " << x8 / k << endl;
	cout << "[2.4,3]     " << x9 / k << endl;
}

void buildTable3(double x0, double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, int k)
{
	cout << "[0,10)   " << x0 / k << endl;
	cout << "[10, 20)   " << x1 / k << endl;
	cout << "[20, 30)   " << x2 / k << endl;
	cout << "[30, 40)   " << x3 / k << endl;
	cout << "[40, 50)   " << x4 / k << endl;
	cout << "[50, 60)   " << x5 / k << endl;
	cout << "[60, 70)   " << x6 / k << endl;
	cout << "[70, 80)   " << x7 / k << endl;
	cout << "[80, 90)   " << x8 / k << endl;
	cout << "[90, 100]     " << x9 / k << endl;
}

int inverse(int xn, int m)
{
	int b0 = m;
	int t, q;
	int x = 0, y = 1;
	while (xn > 1)
	{
		q = xn / m;
		t = m, m = xn % m, xn = t;
		t = x, x = y - q * x, y = t;
	}
	if (y < 0)
	{
		y += b0;
	}
	return y;
}

