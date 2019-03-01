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

int prime(int p);
void main()
{
	int a,i;
	scanf("%d",&a);
	for (i=2;i<=a/2;i++) 
	{
		if (prime(i)&&prime(a-i)) printf("%d %d\n",i,a-i);
	}
}
int prime(int p)
{
    int i;
	for (i=2;i<=(int)sqrt(p);i++)
	{ 
		if (p%i==0) return(0);
	}
	return(1);
}
