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
	int i,j;
	int num1,num2;
	double a[100],b[100],sum,ping;
	cin>>num1;
	for(i=0;i<num1;i++)
	{
		sum=0;
		ping=0;
		cin>>num2;
		for(j=0;j<num2;j++)
		{
			cin>>a[j];
			ping+=(a[j]/num2);
		}
		for(j=0;j<num2;j++)
		{
			sum+=(pow((a[j]-ping),2));
		}
		b[i]=sqrt(sum/num2);
	}
	for(i=0;i<num1;i++)
	{
		printf("%.5f\n",b[i]);		
	}
	return 1;
}