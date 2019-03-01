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
	int a=0,b=0;
	scanf("%d",&a);
	if (a==1) printf("End\n");
	else
	{
	do
	{
		if (a%2==0) 
		{
			b=a/2;
			printf("%d",a);printf("/2=");printf("%d\n",b);
		}
		else 
		{
			b=a*3+1;
			printf("%d",a);printf("*3+1=");printf("%d\n",b);
		}

		a=b;
		b=0;
	}
	while (a!=1);
	if (a==1) printf("End\n");
	}
	return 0;
}
