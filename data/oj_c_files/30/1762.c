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
	int n=0,i=0,a[100]={0},sum_a=0,sum_n=0,sum=0;
	cin>>n;
	if(n>0 && n<100)
	{
		for(i=1;i<=n;i++)
			{
				{
					if(i%7==0 || i%10==7 || i/10==7)
				a[i]=i;
			else
				a[i]=0;
				}
				sum_a=sum_a+a[i]*a[i];
		}
		for(i=1;i<=n;i++)
			sum_n=sum_n+i*i;
		sum=sum_n-sum_a;
		cout<<sum;
	}
	return 0;
}

