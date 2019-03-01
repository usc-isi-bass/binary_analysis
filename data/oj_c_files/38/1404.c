#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

double Variance(double [],int);
int main()
{
	int n,i,j,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		double X[105];;
		for(j=0;j<m;j++)
			cin>>X[j];
		cout<<fixed<<setprecision(5);
		cout<<Variance(X,m)<<endl;
	}
	return 0;
}
double Variance(double X[105], int n)
{
	int i;
	double sum=0,V=0;
	for(i=0;i<n;i++)
	   sum+=X[i];
	sum=sum/n;
	for(i=0;i<n;i++)
		V+=pow(X[i]-sum,2);
	return sqrt(V/n);
}
