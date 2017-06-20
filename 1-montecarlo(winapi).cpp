#include <iostream>
#include <ctime>
#include <math.h>
#include <windows.h>


using namespace std;
double a,b;
double I,S,x,y,f;
int K,N;
const int numThreads = 2;
HANDLE h[numThreads];
CRITICAL_SECTION cs;

double func(double xx)
{
	double ff = xx*xx + 3;
	return ff;
}

DWORD WINAPI ThreadFunc(LPVOID lp)
{
	int temp = 0;
	for(int i=0; i<=N/numThreads; i++)
	{
		x = a*abs(double(rand())/RAND_MAX);
		y = b*abs(double(rand())/RAND_MAX);
		f = func(x);
		if (y<=f) temp++;
	}
	EnterCriticalSection(&cs);
	K += temp;
	LeaveCriticalSection(&cs);
	return 0;
}

void MonteKarlo(int K) 
{
	for(int i = 0; i<numThreads; i++)
	h[i] = CreateThread(0,0,ThreadFunc,0,0,0);
	
	WaitForMultipleObjects(numThreads,h,true,INFINITE);
}

void main()
{
	InitializeCriticalSection(&cs);
	cout<<"Input a = "; cin>>a;
	clock_t time = clock();
	b = func(a);
	K = 0;
	N = 100*1000*1000;
	srand(time);

	MonteKarlo(K); 

	S = a * b;
	I = K*S/N;
	cout<<"Integral = "<<I;
	time = clock() - time;
	cout<<" time = "<<time<<" msc\n";


	DeleteCriticalSection(&cs);
	int q;
	cin>>q;

}
