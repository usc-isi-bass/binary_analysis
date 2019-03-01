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

int sum(int x,int y);
void main()
{
   int n,k;
   scanf("%d %d",&n,&k);
   printf("%d\n",sum(n,k));
}
int sum(int x,int y)
{
	int m,i;
	for(m=1,i=1;i<=x;i++)
	{
		m*=x;
	}
	m-=(x-1)*y;
	return m;
}