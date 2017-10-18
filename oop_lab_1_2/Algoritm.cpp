#include "Algoritm.h"
#include "Support.h"
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;


double f_next(int m, double u) {
	int a = 67;
	int b = 8;
	u = a*u + b;
	u = u - m*floor(u / m);
	u = u / m;

	return u;
}


void Table1(int m, int k)
{
	

	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
double  x;
double s = 0;
	int e = 0;

	double u = 17;
	int a = 67;
	int b = 8;

	while (e<k)
	{
		u = a*u + b;
		u = u - m*floor(u / m);
		x = u / m;
		//cout << e << "   " << x << endl;
		if (0 <= x&&x<0.1)
		{
			x0++;
		}
		if (0.1 <= x&&x<0.2)
		{
			x1++;
		}
		if (0.2 <= x&&x<0.3)
		{
			x2++;
		}
		if (0.3 <= x&&x<0.4)
		{
			x3++;
		}
		if (0.4 <= x&&x<0.5)
		{
			x4++;
		}
		if (0.5 <= x&&x<0.6)
		{
			x5++;
		}
		if (0.6 <= x&&x<0.7)
		{
			x6++;
		}
		if (0.7 <= x&&x<0.8)
		{
			x7++;
		}
		if (0.8 <= x&&x<0.9)
		{
			x8++;
		}
		if (0.9 <= x&&x <= 1)
		{
			x9++;
		}
		
		e++;
	}
	buildTable(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
	s = s / k;
	cout << "s ="<<s <<endl;
}

void Table2(int m, int k)
{
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	int  t, e = 0; double  x;

	double u = 17;
	int a = 67;
	int b = 8;
	int c = 9;

	

	t = a*a;
	while (e<k)
	{
		u = t*u + b*u + c;
		u = u - m*floor(u / m);
		x = u / m;
		//cout << e << "   " << x << endl;
		if (0 <= x&&x<0.1)
		{
			x0++;
		}
		if (0.1 <= x&&x<0.2)
		{
			x1++;
		}
		if (0.2 <= x&&x<0.3)
		{
			x2++;
		}
		if (0.3 <= x&&x<0.4)
		{
			x3++;
		}
		if (0.4 <= x&&x<0.5)
		{
			x4++;
		}
		if (0.5 <= x&&x<0.6)
		{
			x5++;
		}
		if (0.6 <= x&&x<0.7)
		{
			x6++;
		}
		if (0.7 <= x&&x<0.8)
		{
			x7++;
		}
		if (0.8 <= x&&x<0.9)
		{
			x8++;
		}
		if (0.9 <= x&&x <= 1)
		{
			x9++;
		}
		e++;
	}
	buildTable(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}

void Table3(int m, int k)
{
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	int e = 0; double x;
	double u0 = 2;
	double u = 5;
	while (e<k)
	{
		int q = u;
		u = u + u0;
		u0 = q;
		u = u - m*floor(u / m);
		x = u / m;
		//cout << e << "   " << u0 << "   " << u << endl;
		if (0 <= x&&x<0.1)
		{
			x0++;
		}
		if (0.1 <= x&&x<0.2)
		{
			x1++;
		}
		if (0.2 <= x&&x<0.3)
		{
			x2++;
		}
		if (0.3 <= x&&x<0.4)
		{
			x3++;
		}
		if (0.4 <= x&&x<0.5)
		{
			x4++;
		}
		if (0.5 <= x&&x<0.6)
		{
			x5++;
		}
		if (0.6 <= x&&x<0.7)
		{
			x6++;
		}
		if (0.7 <= x&&x<0.8)
		{
			x7++;
		}
		if (0.8 <= x&&x<0.9)
		{
			x8++;
		}
		if (0.9 <= x&&x <= 1)
		{
			x9++;
		}
		e++;
	}
	buildTable(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}

void Table4(int m, int k)
{
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	int e = 0; double  x;

	double u = 37;
	int a = 75;
	int b = 8;

	while (e<k)
	{
		u = a*inverse(u, m) + b;
		u = u - m*floor(u / m);
		x = u / m;
		//cout << e << "   " << x << endl;
		if (0 <= x&&x<0.1)
		{
			x0++;
		}
		if (0.1 <= x&&x<0.2)
		{
			x1++;
		}
		if (0.2 <= x&&x<0.3)
		{
			x2++;
		}
		if (0.3 <= x&&x<0.4)
		{
			x3++;
		}
		if (0.4 <= x&&x<0.5)
		{
			x4++;
		}
		if (0.5 <= x&&x<0.6)
		{
			x5++;
		}
		if (0.6 <= x&&x<0.7)
		{
			x6++;
		}
		if (0.7 <= x&&x<0.8)
		{
			x7++;
		}
		if (0.8 <= x&&x<0.9)
		{
			x8++;
		}
		if (0.9 <= x&&x <= 1)
		{
			x9++;
		}
		e++;
	}
	buildTable(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}

void Table5(int m, int k)
{
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	int   t2, e = 0; double x;
	double u = 17;
	double v = 17;
	int a1 = 67;
	int b1 = 8;
	int a2 = 67;
	int  b2 = 8;
	int c2 = 9;
	//cout << "¬ведiть початкове значенн€ x0, x1, y0, y1:" << endl;
	//cin  >> u >> v;
	/*cout << "¬ведiть коеф≥ц≥енти а1, b1, c1, a2, b2, c2:" << endl;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;*/
	 t2 = a2*a2;
	while (e<k)
	{
		
			u = a1*u + b1;
			u = u - m*floor(u / m);
		
			v = t2*v + b2*u + c2;
			v = v - m*floor(v / m);
		
		

		x = abs(u - v) / m;
		if (0 <= x&&x<0.1)
		{
			x0++;
		}
		if (0.1 <= x&&x<0.2)
		{
			x1++;
		}
		if (0.2 <= x&&x<0.3)
		{
			x2++;
		}
		if (0.3 <= x&&x<0.4)
		{
			x3++;
		}
		if (0.4 <= x&&x<0.5)
		{
			x4++;
		}
		if (0.5 <= x&&x<0.6)
		{
			x5++;
		}
		if (0.6 <= x&&x<0.7)
		{
			x6++;
		}
		if (0.7 <= x&&x<0.8)
		{
			x7++;
		}
		if (0.8 <= x&&x<0.9)
		{
			x8++;
		}
		if (0.9 <= x&&x <= 1)
		{
			x9++;
		}
		e++;
	}
	buildTable(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}

void Table6(int k)
{
	srand(time(0));
	double x;
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	for (int i = 0; i<k; i++)
	{
		double s = 0;
		for (int i = 0; i<12; i++)
		{
			s = s + (double)(rand() % 1001) / (double)1000;
		}
		int mu = 0; int sigma = 1;
		x = (mu + (s - 6) * sigma);
		if (-3 <= x&&x<-2.4)
		{
			x0++;
		}
		if (-2.4 <= x&&x<-1.8)
		{
			x1++;
		}
		if (-1.8 <= x&&x<-1.2)
		{
			x2++;
		}
		if (-1.2 <= x&&x<-0.6)
		{
			x3++;
		}
		if (-0.6 <= x&&x<0)
		{
			x4++;
		}
		if (0 <= x&&x<0.6)
		{
			x5++;
		}
		if (0.6 <= x&&x<1.2)
		{
			x6++;
		}
		if (1.2 <= x&&x<1.8)
		{
			x7++;
		}
		if (1.8 <= x&&x<2.4)
		{
			x8++;
		}
		if (2.4 <= x&&x <= 3)
		{
			x9++;
		}
	}
	buildTable2(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}

void Table7(int k)
{
	srand(time(0));
	double x;
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	for (int i = 0; i<k; i++)
	{
		double S = 2, v1, v2;
		while (S >= 1)
		{
			double u1 = (double)(rand() % 1000) / (double)1000, u2 = (double)(rand() % 1000) / (double)1000;
			//cout << u1 << "   " << u2 << endl;
			v1 = 2 * u1 - 1, v2 = 2 * u2 - 1;
			S = v1 * v1 + v2 * v2;
		}
		double x1 = v1 * sqrt(-2 * log(S) / S);
		double x2 = v2 * sqrt(-2 * log(S) / S);
		if ((i % 2) == 0) x = x1; else x = x2;

		if (-3 <= x&&x<-2.4)
		{
			x0++;
		}
		if (-2.4 <= x&&x<-1.8)
		{
			x1++;
		}
		if (-1.8 <= x&&x<-1.2)
		{
			x2++;
		}
		if (-1.2 <= x&&x<-0.6)
		{
			x3++;
		}
		if (-0.6 <= x&&x<0)
		{
			x4++;
		}
		if (0 <= x&&x<0.6)
		{
			x5++;
		}
		if (0.6 <= x&&x<1.2)
		{
			x6++;
		}
		if (1.2 <= x&&x<1.8)
		{
			x7++;
		}
		if (1.8 <= x&&x<2.4)
		{
			x8++;
		}
		if (2.4 <= x&&x <= 3)
		{
			x9++;
		}
	}
	buildTable2(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}

void Table8(int k)
{
	srand(time(0));
	double x = 0;
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	for (int i = 0; i<k; i++)
	{
		double u = (double)(rand() % 1000) / (double)1000;
		double v = (double)(rand() % 1000) / (double)1000;
		if (u != 0)
		{
			double q = sqrt(8 / 2.71828182845904523536) * (v - 0.5) / u;
			if (q*q <= -4 * log(u))
			{
				x = q;
			}
		}

		if (-3 <= x&&x<-2.4)
		{
			x0++;
		}
		if (-2.4 <= x&&x<-1.8)
		{
			x1++;
		}
		if (-1.8 <= x&&x<-1.2)
		{
			x2++;
		}
		if (-1.2 <= x&&x<-0.6)
		{
			x3++;
		}
		if (-0.6 <= x&&x<0)
		{
			x4++;
		}
		if (0 <= x&&x<0.6)
		{
			x5++;
		}
		if (0.6 <= x&&x<1.2)
		{
			x6++;
		}
		if (1.2 <= x&&x<1.8)
		{
			x7++;
		}
		if (1.8 <= x&&x<2.4)
		{
			x8++;
		}
		if (2.4 <= x&&x <= 3)
		{
			x9++;
		}
	}
	buildTable2(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}

void Table9(int k)
{
	srand(time(0));
	double x;
	double mu = 20;
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	for (int i = 0; i<k; i++)
	{
		double u = (double)(rand() % 1000) / (double)1000;
		if (u != 0)
			x=(-mu)*log(u);

		if (0 <= x&&x< 10)
		{
			x0++;
		}
		if (10 <= x&&x< 20)
		{
			x1++;
		}
		if (20 <= x&&x< 30)
		{
			x2++;
		}
		if (30 <= x&&x< 40)
		{
			x3++;
		}
		if (40 <= x&&x< 50)
		{
			x4++;
		}
		if (50 <= x&&x< 60)
		{
			x5++;
		}
		if (60 <= x&&x< 70)
		{
			x6++;
		}
		if (70 <= x&&x< 80)
		{
			x7++;
		}
		if (80 <= x&&x< 90)
		{
			x8++;
		}
		if (90 <= x&&x <= 100)
		{
			x9++;
		}
	}
	buildTable3(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}

void Table10(int k)
{
	int m = 2147;
	srand(time(0));
	double a = 23;
	double x, u, t = -1, v = 1, Vmax = 2;
	double x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
	for (int i = 0; i<k; i++)
	{
		while ((t <= 0) || (v>Vmax))
		{
			u = (double)(rand()) ;
			cout << u << endl;
			u = f_next(m, u);
			cout << u << endl;
			double y = tan(3.1415926 * u);
			        t=sqrt(2.0 * a - 1) * y + a - 1;
					cout << t << endl;
					
			v = (double)(rand() );
			v = f_next(m, v);
			     Vmax=(1.0 + y*y)*exp((a-1)*log(t/(a-1))-sqrt(2.0*a-1)*y);
		}
		x = t;
		

		if (0 <= x&&x< 10)
		{
			x0++;
		}
		if (10 <= x&&x< 20)
		{
			x1++;
		}
		if (20 <= x&&x< 30)
		{
			x2++;
		}
		if (30 <= x&&x< 40)
		{
			x3++;
		}
		if (40 <= x&&x< 50)
		{
			x4++;
		}
		if (50 <= x&&x< 60)
		{
			x5++;
		}
		if (60 <= x&&x< 70)
		{
			x6++;
		}
		if (70 <= x&&x< 80)
		{
			x7++;
		}
		if (80 <= x&&x< 90)
		{
			x8++;
		}
		if (90 <= x&&x <= 100)
		{
			x9++;
		}
	}
	buildTable3(x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, k);
}
