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

int number(int n)
{
	int a,number=0;
	if(n>=0)
	{
	while(n!=0)
	{
		a=n%10;
		number=number*10+a;
		n=n/10;
	}
	return number;
	}
	if(n<0)
	{
		n=-n;
        while(n!=0)
		{
		 a=n%10;
		 number=number*10+a;
		 n=n/10;
		}
		return -number;
	}

}
void main()
{
	int A[6],i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",number(A[i]));
	}

}