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
	printf("---------- *** Algebra Matrices *** -----------\n");
	printf("-----------------------------------------------\n");
	printf("\n");
	
	printf("Menu:\n");
	printf("1 Find 2D matrix determinant 2x2\n");
	printf("2 Find 3D matrix determinant 3x3\n");
	printf("3 Find 3D matrix ^ 2\n");
	printf("4 Find 3D matrix ^ 3\n");
	printf("5 Find inverse 3D matrix\n");
	printf("-----------------------------------------------\n");
	int N; printf("Choose 1, 2, 3, 4 or 5: "); cin >> N; // 
	switch(N)
	{
		case 1:
			system("cls");
			printf("Menu: 1 Find 2D matrix determinant 2x2\n");
			printf("Input elements of the 2D matrix:\n");
			double a11; printf("Input a11: "); cin >> a11;
			double a12; printf("Input a12: "); cin >> a12;
			double a21; printf("Input a21: "); cin >> a21;
			double a22; printf("Input a22: "); cin >> a22;
			double d1; d1 = a11*a22 - a21*a12;
			printf("-----------------------------------------------\n");
			printf("    | %.1f", a11);printf(" %.1f", a12);printf(" |\n");
			printf("D = | %.1f", a21);printf(" %.1f", a22);printf(" | = %.10f\n", d1); 
			getch(); return 0;
			break;
		case 2:
			system("cls");
			printf("Menu: 2 Find 3D matrix determinant 3x3\n");
			printf("Input elements of the 3D matrix:\n");
			double b11; printf("Input a11: "); cin >> b11;
			double b12; printf("Input a12: "); cin >> b12;
			double b13; printf("Input a13: "); cin >> b13;
			double b21; printf("Input a21: "); cin >> b21;
			double b22; printf("Input a22: "); cin >> b22;
			double b23; printf("Input a23: "); cin >> b23;
			double b31; printf("Input a31: "); cin >> b31;
			double b32; printf("Input a32: "); cin >> b32;
			double b33; printf("Input a33: "); cin >> b33;
			double d2; d2 = b11*b22*b33 + b12*b23*b31 + b13*b21*b32;
			d2 = d2 - b13*b22*b31 - b12*b21*b33 - b11*b32*b23;
			printf("-----------------------------------------------\n");
			printf("    | %.1f", b11);printf(" %.1f", b12);printf(" %.1f", b13);printf(" |\n");
			printf("D = | %.1f", b21);printf(" %.1f", b22);printf(" %.1f", b23);printf(" | = %.10f\n", d2); 
			printf("    | %.1f", b31);printf(" %.1f", b32);printf(" %.1f", b33);printf(" |\n"); 
			getch(); return 0;
			break;
		case 3:
			system("cls");
			printf("Menu: 3 Find 3D matrix ^ 2\n");
			printf("Input elements of the 3D matrix:\n");
			double c11; printf("Input a11: "); cin >> c11;
			double c12; printf("Input a12: "); cin >> c12;
			double c13; printf("Input a13: "); cin >> c13;
			double c21; printf("Input a21: "); cin >> c21;
			double c22; printf("Input a22: "); cin >> c22;
			double c23; printf("Input a23: "); cin >> c23;
			double c31; printf("Input a31: "); cin >> c31;
			double c32; printf("Input a32: "); cin >> c32;
			double c33; printf("Input a33: "); cin >> c33;
			double x11; x11 = c11*c11 + c12*c21 + c13*c31;
			double x12; x12 = c11*c12 + c12*c22 + c13*c32;
			double x13; x13 = c11*c13 + c12*c23 + c13*c33;
			double x21; x21 = c21*c11 + c22*c21 + c23*c31;
			double x22; x22 = c21*c12 + c22*c22 + c23*c32;
			double x23; x23 = c21*c13 + c22*c23 + c23*c33;
			double x31; x31 = c31*c11 + c32*c21 + c33*c31;
			double x32; x32 = c31*c12 + c32*c22 + c33*c32;
			double x33; x33 = c31*c13 + c32*c23 + c33*c33;
			printf("-----------------------------------------------\n");
			printf("    ( %.1f", c11);printf("   %.1f", c12);printf("   %.1f", c13);printf(" )         ( %.1f", x11);printf("   %.1f", x12);printf("   %.1f", x13);printf(" )\n");
			printf("A = ( %.1f", c21);printf("   %.1f", c22);printf("   %.1f", c23);printf(" ) ; A^2 = ( %.1f", x21);printf("   %.1f", x22);printf("   %.1f", x23);printf(" )\n");
			printf("    ( %.1f", c31);printf("   %.1f", c32);printf("   %.1f", c33);printf(" )         ( %.1f", x31);printf("   %.1f", x32);printf("   %.1f", x33);printf(" )\n");
			getch(); return 0;
			break;
		case 4:
			system("cls");
			printf("Menu: 4 Find 3D matrix ^ 3\n");
			printf("Input elements of the 3D matrix:\n");
			double cc11; printf("Input a11: "); cin >> cc11;
			double cc12; printf("Input a12: "); cin >> cc12;
			double cc13; printf("Input a13: "); cin >> cc13;
			double cc21; printf("Input a21: "); cin >> cc21;
			double cc22; printf("Input a22: "); cin >> cc22;
			double cc23; printf("Input a23: "); cin >> cc23;
			double cc31; printf("Input a31: "); cin >> cc31;
			double cc32; printf("Input a32: "); cin >> cc32;
			double cc33; printf("Input a33: "); cin >> cc33;
			double xx11; xx11 = cc11*cc11 + cc12*cc21 + cc13*cc31;
			double xx12; xx12 = cc11*cc12 + cc12*cc22 + cc13*cc32;
			double xx13; xx13 = cc11*cc13 + cc12*cc23 + cc13*cc33;
			double xx21; xx21 = cc21*cc11 + cc22*cc21 + cc23*cc31;
			double xx22; xx22 = cc21*cc12 + cc22*cc22 + cc23*cc32;
			double xx23; xx23 = cc21*cc13 + cc22*cc23 + cc23*cc33;
			double xx31; xx31 = cc31*cc11 + cc32*cc21 + cc33*cc31;
			double xx32; xx32 = cc31*cc12 + cc32*cc22 + cc33*cc32;
			double xx33; xx33 = cc31*cc13 + cc32*cc23 + cc33*cc33;
			double y11; y11 = xx11*cc11 + xx12*cc21 + xx13*cc31;
			double y12; y12 = xx11*cc12 + xx12*cc22 + xx13*cc32;
			double y13; y13 = xx11*cc13 + xx12*cc23 + xx13*cc33;
			double y21; y21 = xx21*cc11 + xx22*cc21 + xx23*cc31;
			double y22; y22 = xx21*cc12 + xx22*cc22 + xx23*cc32;
			double y23; y23 = xx21*cc13 + xx22*cc23 + xx23*cc33;
			double y31; y31 = xx31*cc11 + xx32*cc21 + xx33*cc31;
			double y32; y32 = xx31*cc12 + xx32*cc22 + xx33*cc32;
			double y33; y33 = xx31*cc13 + xx32*cc23 + xx33*cc33;
			printf("-----------------------------------------------\n");
			printf("    ( %.1f", cc11);printf("   %.1f", cc12);printf("   %.1f", cc13);printf(" )         ( %.1f", y11);printf("   %.1f", y12);printf("   %.1f", y13);printf(" )\n");
			printf("A = ( %.1f", cc21);printf("   %.1f", cc22);printf("   %.1f", cc23);printf(" ) ; A^3 = ( %.1f", y21);printf("   %.1f", y22);printf("   %.1f", y23);printf(" )\n");
			printf("    ( %.1f", cc31);printf("   %.1f", cc32);printf("   %.1f", cc33);printf(" )         ( %.1f", y31);printf("   %.1f", y32);printf("   %.1f", y33);printf(" )\n");
			getch(); return 0;
			break;
		case 5:
			system("cls");
			printf("Menu: 5 Find inverse 3D matrix\n");
			printf("Input elements of the 3D matrix:\n");
			double d11; printf("Input a11: "); cin >> d11;
			double d12; printf("Input a12: "); cin >> d12;
			double d13; printf("Input a13: "); cin >> d13;
			double d21; printf("Input a21: "); cin >> d21;
			double d22; printf("Input a22: "); cin >> d22;
			double d23; printf("Input a23: "); cin >> d23;
			double d31; printf("Input a31: "); cin >> d31;
			double d32; printf("Input a32: "); cin >> d32;
			double d33; printf("Input a33: "); cin >> d33;

			double d3; d3 = d11*d22*d33 + d12*d23*d31 + d13*d21*d32;
			d3 = d3 - d13*d22*d31 - d12*d21*d33 - d11*d32*d23;
			
			if (d3 == 0) {
				printf("-----------------------------------------------\n");
				printf("    ( %.1f", d11);printf("   %.1f", d12);printf("   %.1f", d13);printf(" )\n");
				printf("A = ( %.1f", d21);printf("   %.1f", d22);printf("   %.1f", d23);printf(" )\n");
				printf("    ( %.1f", d31);printf("   %.1f", d32);printf("   %.1f", d33);printf(" )\n");
				printf("\nD = %.10f", d3);printf(" ! No inverse matrix for A.");
			} else {

				double z11; z11 = ((1.0)*(d22*d33 - d23*d32))/d3;
				double z12; z12 = ((-1.0)*(d12*d33 - d13*d32))/d3;
				double z13; z13 = ((1.0)*(d12*d23 - d13*d22))/d3;
				double z21; z21 = ((-1.0)*(d21*d33 - d23*d31))/d3;
				double z22; z22 = ((1.0)*(d11*d33 - d13*d31))/d3;
				double z23; z23 = ((-1.0)*(d11*d23 - d13*d21))/d3;
				double z31; z31 = ((1.0)*(d21*d32 - d22*d31))/d3;
				double z32; z32 = ((-1.0)*(d11*d32 - d12*d31))/d3;
				double z33; z33 = ((1.0)*(d11*d22 - d12*d21))/d3;
				
				printf("-----------------------------------------------\n");
				printf("    ( %.1f", d11);printf("   %.1f", d12);printf("   %.1f", d13);printf(" )         ( %.3f", z11);printf("   %.3f", z12);printf("   %.3f", z13);printf(" )\n");
				printf("A = ( %.1f", d21);printf("   %.1f", d22);printf("   %.1f", d23);printf(" ) ; A-1 = ( %.3f", z21);printf("   %.3f", z22);printf("   %.3f", z23);printf(" )\n");
				printf("    ( %.1f", d31);printf("   %.1f", d32);printf("   %.1f", d33);printf(" )         ( %.3f", z31);printf("   %.3f", z32);printf("   %.3f", z33);printf(" )\n");
				printf("\nD = %.10f\n", d3);

			}

			getch(); return 0;
			break;
		default: 
			return 0;
			break;
	}

	getch(); 
	return 0;
	// --- Output --------------------------------
	//printf("----------------------- \n");
	//printf("Integral S(x) = %.4f \n", s);
	//printf("Step h = %.10f \n", h);
	//cout << "Hello World " << N << endl; // тоже самое что и принт
	//getch(); // задержка консоли
	//return 0;
}