#include<iostream>
#include "Algoritm.h"
#include "Support.h"

using namespace std;

int main()
{
	setlocale(0, "");
	const int m = 2147483647; 

	cout << "Виберiть один iз 10 алгоритмiв генерацiї псевдовипадкових чисел: " << endl;
	cout << "1 - лiнiйний конгурентний метод" << endl;
	cout << "2 - квадратичний конгруентний метод" << endl;
	cout << "3 - числа Фiбоначi" << endl;
	cout << "4 - обернена конгруентна послiдовнiсть" << endl;
	cout << "5 - метод об'єднання" << endl;
	cout << "6 - правило '3 сiгма'" << endl;
	cout << "7 - метод полярних координат" << endl;
	cout << "8 - метод спiввiдношень" << endl;
	cout << "9 - метод логарифму для генерування показового розподiлу" << endl;
	cout << "10- метод Аренса для генерування гамма-розподiлу" << endl;
	cout << "Для виходу натиснiть '0'." << endl;

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
