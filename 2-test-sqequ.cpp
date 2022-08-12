// console_test.cpp: главный файл проекта.

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <conio.h>

using namespace std;

int main()
{
	// Input
	printf("----------------------------------------------\n");
	printf("---- *** Find Root(s) of the Equation *** ----\n");
	printf("----------------------------------------------\n");
	printf("------------- a*x^2 + b*x + c = 0 ------------\n");
	printf("\n");

	double a; printf("Input a (coef by x^2): "); cin >> a; // коэф при X^2
	double b; printf("Input b (coef by x  ): "); cin >> b; // коэф при X
	double c; printf("Input c (free coef  ): "); cin >> c; // свободный коэф
	double d; double x1; double x2;

	if (a+b+c == 0) { // 0 = 0 при любых х
		printf("----------------------------------------------\n");
		printf("It seems there's no equation! \n"); 
		getch(); return 0;}

	d = b*b - 4*a*c;

	if (d < 0) { // D < 0, уравнение не имеет вещественных корней
		printf("----------------------------------------------\n");
		printf("Discriminant must be greater than 0! \n"); 
		getch(); return 0;}
	
	if (d == 0) { // D = 0, уравнение имеет один корень
		x1 = (b*(-1.0))/(a*2.0);
		printf("----------------------------------------------\n");
		printf("Equation     : (%.1f",a); printf(")x^2 + (%.1f",b); printf(")x + (%.1f",c); printf(") = 0 \n");
		printf("Discriminant : D = %.4f \n", d);
		printf("Root         : x = %.4f \n", x1);
	}
	else { // D > 0, уравнение имеет два корня
		x1 = ((b*(-1.0)) + sqrt(d)) /(a*2.0);
		x2 = ((b*(-1.0)) - sqrt(d)) /(a*2.0);
		printf("----------------------------------------------\n");
		printf("Equation     : (%.1f",a); printf(")x^2 + (%.1f",b); printf(")x + (%.1f",c); printf(") = 0 \n");
		printf("Discriminant :  D = %.4f \n", d);
		printf("Roots        : x1 = %.4f", x1);
		printf(", x2 = %.4f \n", x2);
	}


	getch(); // задержка консоли
	return 0;
}