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
	printf("---------- *** Chess Pieces Moves *** ---------\n");
	printf("-----------------------------------------------\n");
	printf("\n");
	
	printf("Menu:\n");
	printf("1 King Moves\n");
	printf("2 Queen Moves\n");
	printf("3 Rook Moves\n");
	printf("4 Knight Moves\n");
	printf("5 Bishop Moves\n");
	printf("6 Pawn Moves\n");
	int N; printf("Choose one piece (1,2,3,4,5 or 6): "); cin >> N; // player

	printf("-----------------------------------------------\n");
	printf("Put the figure on an empty chessboard:\n");
	int X0; printf("Input X (horizontal): "); cin >> X0; // From X-axis
	int Y0; printf("Input Y (vertical): "); cin >> Y0; // From Y-axis
	printf("\nWhere you want to move it:\n");
	int X1; printf("Input X (horizontal): "); cin >> X1; // To X-axis
	int Y1; printf("Input Y (vertical): "); cin >> Y1; // To Y-axis
	int dX, dY; double tang;

	if (((X0>=1)&&(X0<=8))&&((Y0>=1)&&(Y0<=8))&& 
		((X1>=1)&&(X1<=8))&&((Y1>=1)&&(Y1<=8))) {
		switch(N) {
			case 1:
				printf("\nMenu: 1 King Moves ----------------------------\n");
				printf("\n");
				dX = X1-X0; dY = Y1-Y0;
				if (((dX==0)||(dX==1)||(dX==-1))&&
					((dY==0)||(dY==1)||(dY==-1))&&
					((dX*dY==0)||(dX*dY==1)||(dX*dY==-1))&&(dX+dY!=0)) {
					printf("YES: You can move a King from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(").\n");
					getch();
					return 0;
				} else {
					printf("NO: You can't move a King from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(")!\n");
					getch();
					return 0;
				}
				break;
			case 2:
				printf("\nMenu: 2 Queen Moves ---------------------------\n");
				dX = X1-X0; dY = Y1-Y0;
				tang = (dY*(1.0))/(dX*(1.0));
				if ((tang==1)||(tang==-1)||(dX*dY==0)) {
					printf("YES: You can move a Queen from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(").\n");
					getch();
					return 0;
				} else {
					printf("NO: You can't move a Queen from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(")!\n");
					getch();
					return 0;
				}
				break;
			case 3:
				printf("\nMenu: 3 Rook Moves ----------------------------\n");
				dX = X1-X0; dY = Y1-Y0;
				if (dX*dY==0) {
					printf("YES: You can move a Rook from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(").\n");
					getch();
					return 0;
				} else {
					printf("NO: You can't move a Rook from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(")!\n");
					getch();
					return 0;
				}
				break;
			case 4:
				printf("\nMenu: 4 Knight Moves --------------------------\n");
				dX = X1-X0; dY = Y1-Y0;
				if (((abs(dX)==1)&&(abs(dY)==2))||((abs(dX)==2)&&(abs(dY)==1))) {
					printf("YES: You can move a Knight from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(").\n");
					getch();
					return 0;
				} else {
					printf("NO: You can't move a Knight from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(")!\n");
					getch();
					return 0;
				}
				break;
			case 5:
				printf("\nMenu: 5 Bishop Moves --------------------------\n");
				dX = X1-X0; dY = Y1-Y0;
				tang = (dY*(1.0))/(dX*(1.0));
				if ((tang==1)||(tang==-1)) {
					printf("YES: You can move a Bishop from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(").\n");
					getch();
					return 0;
				} else {
					printf("NO: You can't move a Bishop from (%d",X0);printf(",%d",Y0);
					printf(") to (%d",X1);printf(",%d",Y1);printf(")!\n");
					getch();
					return 0;
				}
				break;
			case 6:
				printf("\nMenu: 6 Pawn Moves ----------------------------\n");
				if ((Y0==1)||(Y1==1)||(Y0==8)) {
					printf("\nWrong Position!\n");
					getch();
					return 0;
				} else {
					dX = X1-X0; dY = Y1-Y0;
					if ((dX==0)&&(dY==1)) {
						if (Y1 == 8) {
							printf("YES: You can move a Pawn from (%d",X0);printf(",%d",Y0);
							printf(") to (%d",X1);printf(",%d",Y1);printf(") to change it for any other figure.\n");
							getch();
							return 0;	
						} else {
							printf("YES: You can move a Pawn from (%d",X0);printf(",%d",Y0);
							printf(") to (%d",X1);printf(",%d",Y1);printf(").\n");
							getch();
							return 0;	
						}
					} else {
						printf("NO: You can't move a Pawn from (%d",X0);printf(",%d",Y0);
						printf(") to (%d",X1);printf(",%d",Y1);printf(")!\n");
						getch();
						return 0;
					}
				}
				break;
			default: 
				printf("\n-----------------------------------------------\n");
				printf("Wrong Figure!\n");
				getch();
				return 0;
				break;
		}
	}
	else {
		printf("\n-----------------------------------------------\n");
		printf("Wrong Position!\n");
		getch();
		return 0;
	}
}