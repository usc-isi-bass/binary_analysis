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

int reverse(int);
int main()
{
	int i,a[6];
	for(i=0;i<=5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=5;i++)
	{
		a[i]=reverse(a[i]);
		cout<<a[i]<<endl;
	}
	return 0;
}
int reverse(int num)
{
	int sum=0,i;
    double t;
	for(t=1;1;t++)
	{
		if(abs(num/pow((double)10,(int)t))>=1)
			continue;
		else
			break;
	}
	for(i=1;i<=t;i++)
	{
		sum=sum+(num%10)*pow(10,t-i);
		num=num/10;
	}
	return sum;
}


