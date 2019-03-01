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
	int n;
	int i,j,k,l;
	double a[2000],*p,averge,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		for(j=0;j<k;j++)
			cin>>a[j];
		p=a;
		for(j=0;j<k;j++)
		{
			sum=sum+*p;
			p++;
		}
		averge=sum/k;
		p=a;
		sum=0;
		for(j=0;j<k;j++)
		{
			sum=sum+(*p-averge)*(*p-averge);
			p++;
		}
		cout<<fixed<<setprecision(5)<<sqrt(sum/k)<<endl;
		sum=0;
	}

}
 