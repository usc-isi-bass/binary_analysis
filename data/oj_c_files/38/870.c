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
	int k;
	cin>>k;
	int i,j,n;
	double x[1001],*p;
	double sum,sum2,eve,s;
	for(i=0;i<k;i++)
	{
		sum=0,sum2=0;
		cin>>n;
		p=x;
		for(j=0;j<n;j++)
		{
			cin>>*p;
			sum=sum+*p;
			sum2=sum2+(*p)*(*p);
		}
		eve=sum/n;
		s=sqrt((sum2+n*eve*eve-2*sum*eve)/n);
		cout<<fixed<<setprecision(5)<<s<<endl;
		
	}
	
	return 0;	
}