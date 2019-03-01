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

int main ()
{
	int n,i=0,j=0,sum=0;
	int a[10][10]={0};
	cin >>n;
	while(i<=9)
	{
		while(j<=9)
		{
			if((i==7)||(j==7)||(i*10+j)%7==0)
				a[i][j]=0;
			else a[i][j]=i*10+j;
			sum=sum+a[i][j]*a[i][j];
			j++;
			if (i*10+j>n)
				break;
		}
		if(i*10+j>n)
			break;
		j=0;
		i++;
	}
	cout <<sum <<endl;
	return 0;
}