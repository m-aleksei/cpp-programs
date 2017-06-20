#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;
double a,b;
double I,S,x,y,f;
int K,N;

double func(double xx)
{
	double ff = xx*xx + 3;
	return ff;
}

void main()
{
	cout<<"Input a = "; cin>>a;
	clock_t time = clock();
	b = func(a);
	S = a * b;
	K = 0;
	N = 0;
	srand(time);
	while (N <= 1000*1000*1000)
	{
		x = a*abs(double(rand())/RAND_MAX);
		y = b*abs(double(rand())/RAND_MAX);
		f = func(x);
		if (y<=f) K++;
		N++;
	}

	I = K*S/N;
	cout<<"Integral = "<<I;
	time = clock() - time;
	cout<<" time = "<<time<<" msc\n";

	int q;
	cin>>q;

}
