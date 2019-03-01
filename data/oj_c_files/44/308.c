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

int reverse(int num);
int main()
{
	int a[6],i,k;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		k=reverse(a[i]);
		printf("%d\n",k);
	}
	return 0;
}

int reverse(int num)
{
	int b,c=0,i,j;
	for(i=0;;i++)
	{
		b=num%10;
		num=num/10;
		c=10*c+b;
		if(num==0)
			break;

	}
	return c;
}
