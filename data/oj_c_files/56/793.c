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

void main()
{
	int a[5],A,b,c,i;
	scanf("%d",&A);
	b=A;
	for(c=0;b>=1;c++)
	{
		b=b/10;
	}
	for(i=0;i<=c-1;i++)
	{
		a[i]=A%10;
		A=A/10;
	}
	for(i=0;i<=c-2;i++)
	{	printf("%d",a[i]);
	}
     printf("%d\n",a[c-1]);
}