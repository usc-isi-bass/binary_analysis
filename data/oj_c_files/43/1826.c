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

int f(int x)
{
	int i;
   for(i=2;i<x;i++)
		if(x%i==0)return 0;
	return 1;
	}
void main()
{
	int m,i;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{if(f(i)==1&&f(m-i)==1)
	printf("%d %d\n",i,m-i);}
}
