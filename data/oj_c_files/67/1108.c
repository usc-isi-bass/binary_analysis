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

struct way
{
	double sum;
	double effect;
	double rate;
} wine, improve[100];
void compare(double a,double b)
{
	if(fabs(a-b)<0.05)
	{
		cout<<"same"<<endl;
	}
	else if(a>b)
	{
		cout<<"worse"<<endl;
	}
	else
	{
		cout<<"better"<<endl;
	}
}
int main()
{
	int n,i;
	cin>>n;
	cin>>wine.sum>>wine.effect;
	wine.rate=wine.effect/wine.sum;
	for(i=0;i<n-1;i++)
	{
		cin>>improve[i].sum>>improve[i].effect;
		improve[i].rate=improve[i].effect/improve[i].sum;
		//cout<<improve[i].sum<<improve[i].effect<<improve[i].rate;
	}
	for(i=0;i<n-1;i++)
		compare(wine.rate,improve[i].rate);
	return 0;
}
		

	
