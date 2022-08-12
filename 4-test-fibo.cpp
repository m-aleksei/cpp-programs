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
	printf("--- *** Find Fibonacci Numbers < Abs(N) *** ---\n");
	printf("-----------------------------------------------\n");
	printf("\n");

	int N; printf("Input (integer) N: "); cin >> N; // число, до которого строить
	int F1 = 0; int F2 = 1; int F3; double S; double k;
	
	switch(N)
	{
	case 0: 
		printf("-----------------------------------------------\n");
		printf("Fibo Array: %d \n", F1); printf("Summ Array: 0 \n");
		printf("Elem Count: 1 \n"); 
		break;
	case 1: 
		printf("-----------------------------------------------\n");
		printf("Fibo Array: %d",F1); printf(", %d",F2); S = F1+F2;
		printf("\nSumm Array: %.0f \n", S);	printf("Elem Count: 2 \n"); 
		
		break;
	case 2: 
		printf("-----------------------------------------------\n");
		printf("Fibo Array: %d",F1); 
		printf(", %d",F2); S = F1+F2; k = 2; F2 = F1+F2;
		printf(", %d",F2); S = S+F2; k++; F1 = F2; F2 = F1+F2;
		printf(", %d",F2); S = S+F2; k++;
		printf("\nSumm Array: %.0f \n", S);
		printf("Elem Count: %.0f \n", k); 
		
		break;
	case -1: 
		printf("-----------------------------------------------\n");
		printf("Fibo Array: %d",F1); printf(", %d",F2); S = F1+F2;
		printf("\nSumm Array: %.0f \n", S);	printf("Elem Count: 2 \n"); 
		
		break;
	case -2: 
		printf("-----------------------------------------------\n");
		printf("Fibo Array: %d",F1); 
		printf(", %d",F2); S = F1+F2; k = 2; F2 = F1-F2;
		printf(", %d",F2); S = S+F2; k++; F1 = abs(F2); F2 = F1-F2;
		printf(", %d",F2); S = S+F2; k++;
		printf("\nSumm Array: %.0f \n", S);
		printf("Elem Count: %.0f \n", k); 
		
		break;
	default: 
		break;
	}

	if (N > 2) {
		printf("-----------------------------------------------\n");
		printf("Fibo Array: %d",F1); 
		printf(", %d",F2); S = F1+F2; k = 2;
		
		for (int i = 1; i <= N; i++)
		{
			F3 = F1 + F2;
			if (F3 <= N) {
				F1 = F2; F2 = F3;
				printf(", %d",F2); S = S+F2; k++;
			}
		}
		printf("\nSumm Array: %.0f \n", S);
		printf("Elem Count: %.0f \n", k); 
	} 

	if (N < -2) {
		printf("-----------------------------------------------\n");
		printf("Fibo Array: %d",F1); 
		printf(", %d",F2); S = F1+F2; k = 2;
		
		for (int i = 1; i <= -N; i++)
		{
			F3 = F1 - F2;
			if (abs(F3) <= abs(N)) {
				F1 = F2; F2 = F3;
				printf(", %d",F2); S = S+F2; k++;
			}
		}
		printf("\nSumm Array: %.0f \n", S);
		printf("Elem Count: %.0f \n", k); 
	}


	S = sqrt(N*N*(5.0)-4.0);
	double M = S - (int)S;
	k = sqrt(N*N*(5.0)+4.0);
	double J = k - (int)k;
	printf("-----------------------------------------------\n");
	if ((M > 0) && (J > 0)) {
		printf("Inputed N = %d",N); printf(" is NOT Fibonacci Number.\n");
	} else {
		if (M == 0) {
			printf("Inputed N = %d",N); printf(" belongs to Fibonacci Array (-).\n");
			printf("Condition: 5N^2-4 = %.0f", S*S); printf(", Sqrt* = %.2f\n", S);
		}
		if (J == 0) {
			printf("Inputed N = %d",N); printf(" belongs to Fibonacci Array (+).\n");
			printf("Condition: 5N^2+4 = %.0f", k*k); printf(", Sqrt* = %.2f\n", k);
		}
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