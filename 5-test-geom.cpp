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
	// --- Input ---------------------------------
	printf("-----------------------------------------------\n");
	printf("---------- *** 3D Geometry Block *** ----------\n");
	printf("-----------------------------------------------\n");
	printf("\n");
	
	printf("Menu:\n");
	printf("1 Find length of 3D vector by coordinates\n");
	printf("2 Length between two 3D dots by coordinates\n");
	printf("3 Length between 3D dot and 3D plane by coordinates\n");
	printf("-----------------------------------------------\n");
	int N; printf("Choose 1, 2 or 3: "); cin >> N; // 
	switch(N)
	{
		case 1:
			system("cls");
			printf("Menu: 1 Find length of 3D vector by coordinates\n");
			double x0; printf("Input X: "); cin >> x0;
			double y0; printf("Input Y: "); cin >> y0;
			double z0; printf("Input Z: "); cin >> z0;
			double d1;
			d1 = pow(x0,2) + pow(y0,2) + pow(z0,2);
			d1 = sqrt(d1);
			printf("-----------------------------------------------\n");
			printf("Length of 3D vector (%.1f", x0);printf(";%.1f", y0);printf(";%.1f", z0);
			printf(") = %.10f\n", d1); getch(); return 0;
			break;
		case 2:
			system("cls");
			printf("Menu: 2 Length between two 3D dots by coordinates\n");
			printf("Input coordinates of the first 3D dot A:\n");
			double ax0; printf("Input X: "); cin >> ax0;
			double ay0; printf("Input Y: "); cin >> ay0;
			double az0; printf("Input Z: "); cin >> az0;
			system("cls");
			printf("Menu: 2 Length between two 3D dots by coordinates\n");
			printf("Input coordinates of the second 3D dot B:\n");
			double bx0; printf("Input X: "); cin >> bx0;
			double by0; printf("Input Y: "); cin >> by0;
			double bz0; printf("Input Z: "); cin >> bz0;
			double d2;
			d2 = pow((bx0-ax0),2) + pow((by0-ay0),2) + pow((bz0-az0),2);
			d2 = sqrt(d2);
			printf("-----------------------------------------------\n");
			printf("Length between A (%.1f", ax0);printf(";%.1f", ay0);printf(";%.1f", az0);
			printf(") and B (%.1f", bx0);printf(";%.1f", by0);printf(";%.1f", bz0);
			printf(") = %.10f\n", d2); getch(); return 0;
			break;
		case 3:
			system("cls");
			printf("Menu: 3 Length between 3D dot and 3D plane by coordinates\n");
			printf("Input coordinates of the 3D dot M:\n");
			double mx0; printf("Input X: "); cin >> mx0;
			double my0; printf("Input Y: "); cin >> my0;
			double mz0; printf("Input Z: "); cin >> mz0;
			system("cls");
			printf("Input coefficients of the 3D plane (A*x + B*y + C*z + D = 0):\n");
			double pa0; printf("Input A: "); cin >> pa0;
			double pb0; printf("Input B: "); cin >> pb0;
			double pc0; printf("Input C: "); cin >> pc0;
			double pd0; printf("Input D: "); cin >> pd0;
			double d3;
			d3 = pa0*mx0 + pb0*my0 + pc0*mz0 + pd0;
			if (d3 < 0)	{ d3 = (-1.0)*d3; }
			d3 = d3 / (sqrt(pow(pa0,2) + pow(pb0,2) + pow(pc0,2)));
			printf("-----------------------------------------------\n");
			printf("Length between M (%.1f", mx0);printf(";%.1f", my0);printf(";%.1f", mz0);
			printf(") and Plane (%.1f", pa0);printf(")*x+(%.1f", pb0);printf(")*y+(%.1f", pc0);
			printf(")*z+(%.1f", pd0); printf(")=0 :\n");
			printf("d = %.10f\n", d3); getch(); return 0;
			break;
		default: 
			return 0;
			break;
	}

	getch(); 
	return 0;

}