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


void count(int n)
{
	int a,b,i,j;
	if(n==1)printf("End\n");
	else
	{
		if(n%2!=0)
		{
			a=n*3+1;
			printf("%d*3+1=%d\n",n,a);
			n=a;
			count(n);
		}
		else 
		{
			b=n/2;
			printf("%d/2=%d\n",n,b);
			n=b;
			count(b);
		}
	}
}

void main()
{
	int n;
	scanf("%d",&n);
	count(n);

}