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

int A(int n)
{
	int i,d=0;
	for(i=2;i<n;i++)
	{
		if((n%i)==0)
		{
			d=1;
			return 0;
		}
	}
	if(d==0)
	{
		return 1;
	}
}
int main()
{
	int m,j;
	scanf("%d",&m);
	for(j=2;j<=m/2;j++)
	{
		if(A(j)&&A(m-j))
		{
			printf("%d %d\n",j,m-j);
		}
	}
	return 0;
}
