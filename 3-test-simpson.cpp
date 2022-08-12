// console_test.cpp: главный файл проекта.

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <conio.h>

using namespace std;

double getFunctionValue(double x)
{
	return pow((2*x-1),6); // подыинтегральная функция
	// return 2*x+3/sqrt(x); // границы 1;4 ответ 21
	// return pow((2*x-1),6); // границы 0;1 ответ 0.1428 (одна-седьмая)

}

int main()
{
	// --- Input ---------------------------------
	double a; printf("Input a: "); cin >> a; // границы интеграла
	double b; printf("Input b: "); cin >> b; // границы интеграла
	int n; printf("Input n(integer EVEN): "); cin >> n; // число разбиений
	if (n % 2 != 0) {
		printf("----------------------- \n");
		printf("Input n must be EVEN! \n"); 
		getch(); return 0;}

	// -------------------------------------------
	double h = (b-a)/(n*1.0); 
	double s; double t;
	// --- Решение интеграла методом Симпсона ----
	s = getFunctionValue(a) + getFunctionValue(b);
	for (int k = 1; k <= (n/2-1); k++) {
		t = a + (2 * k) * h;
		s = s + 2 * getFunctionValue(t);
	}
	for (int j = 1; j <= (n/2); j++) {
		t = a + (2 * j - 1) * h;
		s = s + 4 * getFunctionValue(t);
	}
	s = (s * h) / 3;
	// --- Output --------------------------------
	printf("----------------------- \n");
	printf("Integral S(x) = %.4f \n", s);
	printf("Step h = %.10f \n", h);
	//cout << "Hello World " << N << endl; // тоже самое что и принт
	getch(); // задержка консоли
	return 0;
}