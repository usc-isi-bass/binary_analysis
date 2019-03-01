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

int main()
{
	int k=0;
	cin>>k;
	cin.get();
	for(int u=0;u<k;u++)
	{
		int n=0;
		cin>>n;
		cin.get();
		double a[110]={0},*p=a,x=0;
		for(p;p<a+n;p++)
		{
			cin>>*p;
			x+=(*p/n);
		}
		cin.get();
		double sum=0;
		for(p=a;p<a+n;p++)
		{
			sum+=pow((*p-x),2);
		}
		double s=sqrt(sum/n);
		printf("%.5f\n",s);
	}
	return 0;
}