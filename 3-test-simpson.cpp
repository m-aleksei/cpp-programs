// console_test.cpp: ������� ���� �������.

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
	return pow((2*x-1),6); // ���������������� �������
	// return 2*x+3/sqrt(x); // ������� 1;4 ����� 21
	// return pow((2*x-1),6); // ������� 0;1 ����� 0.1428 (����-�������)

}

int main()
{
	// --- Input ---------------------------------
	double a; printf("Input a: "); cin >> a; // ������� ���������
	double b; printf("Input b: "); cin >> b; // ������� ���������
	int n; printf("Input n(integer EVEN): "); cin >> n; // ����� ���������
	if (n % 2 != 0) {
		printf("----------------------- \n");
		printf("Input n must be EVEN! \n"); 
		getch(); return 0;}

	// -------------------------------------------
	double h = (b-a)/(n*1.0); 
	double s; double t;
	// --- ������� ��������� ������� �������� ----
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
	//cout << "Hello World " << N << endl; // ���� ����� ��� � �����
	getch(); // �������� �������
	return 0;
}