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
	printf("------ *** Chain Fraction Computation *** -----\n");
	printf("-----------------------------------------------\n");
	printf("\n");
	
	int N; printf("Input Number of Chain Elements: "); cin >> N; // 
	int *p_chain = new int[N];
	double ch; double th;

	if (N >= 0) {
		system("cls");
		for (int i = 0; i < N; i++) {
			printf("Input a(%d",i);printf("): "); cin >> p_chain[i];
		}
		if (N == 1) {
			ch = p_chain[0];
		}
		if (N == 2) {
			ch = p_chain[0] + (1/(p_chain[1]*(1.0)));
		}
		if (N > 2) {
			th = (1/(p_chain[N-1]*(1.0)));
			//printf("th %.10f\n",th);
			while (N --> 2) {
				ch = p_chain[N-1] + th;
				//printf("ch %.10f",ch);printf("; %d\n",p_chain[N-1]);
				th = (1/(ch*(1.0)));
				//printf("th %.10f",th);printf("- %d\n",N);
			}
			ch = th + p_chain[0];
		}
		printf("-----------------------------------------------\n");
		printf("Number (defined by Chain): %.10f\n",ch);
		getch(); 
		return 0;
	} else {
		printf("\n-----------------------------------------------\n");
		printf("Invalid Number!\n");
		getch(); 
		return 0;
	}

}