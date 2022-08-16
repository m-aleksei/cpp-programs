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
	printf("---- *** Chain Fraction Visualization *** -----\n");
	printf("-----------------------------------------------\n");
	printf("\n");
	
	int N; printf("Input Nominator of the Number: "); cin >> N; // nominator
	int M; printf("Input Denominator of the Number: "); cin >> M; // denominator
	double x, p, q, r;
	int charray[100];

	if (N == 0) {
		printf("\n-----------------------------------------------\n");
		printf("For the Inputed Rational Number (%d",N); printf("/%d",M); printf(")\n");
		printf("Chain Fraction: [ 0 ]\n");
		getch(); 
		return 0;
	}
	if (M == 0) {
		printf("\n-----------------------------------------------\n");
		printf("Invalid Rational Number!\n");
		getch(); 
		return 0;
	} else {
		printf("\n");
		x = (1.0)*N; p = (1.0)*M; q = int(x/p); r = fmod(x,p);
		printf("#0: %.0f",x);printf(" = %.0f",p);printf(" * %.0f",q);printf(" + %.0f\n",r);
		charray[0] = q;
		if (r == 0) {
			printf("-----------------------------------------------\n");
			printf("For the Inputed Rational Number (%d",N); printf("/%d",M); printf(")\n");
			printf("Chain Fraction: [ %d",charray[0]);printf(" ]\n");
			getch(); 
			return 0;
		} else {
			for (int i1 = 1; i1 < 100; i1++) {
				charray[i1] = 0;
			}
		
			for (int i2 = 1; i2 < 100; i2++) {
				x = p; p = r; q = int(x/p); r = fmod(x,p);
				printf("#%d",i2);printf(": %.0f",x);printf(" = %.0f",p);printf(" * %.0f",q);printf(" + %.0f\n",r);
				if (r == 0) {
					charray[i2] = q;
					printf("-----------------------------------------------\n");
					printf("For the Inputed Rational Number (%d",N); printf("/%d",M); printf(")\n");
					printf("Chain Fraction: [");
					for (int j1 = 0; j1 < 100; j1++) {
						if (j1 == 0) { printf(" %d",charray[j1]); }
						if (charray[j1] != 0 && j1 != 0) { printf(" %d",charray[j1]); }
					}
					printf(" ]\n");
					getch(); 
					return 0;
				} else {
					charray[i2] = q;
				}
			}

		} // first r != 0
	}	// inputed M != 0

}