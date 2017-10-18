#pragma once

void switcher(int alg, int m, int k); //функція, що обирає алгоритм генерації псевдовипадкових чисел

void buildTable(double x0, double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, int k); //табуляція для рівномірного розподілу

void buildTable2(double x0, double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, int k);//табуляція для нормального розподілу

void buildTable3(double x0, double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8, double x9, int k); 

int inverse(int xn, int p);
