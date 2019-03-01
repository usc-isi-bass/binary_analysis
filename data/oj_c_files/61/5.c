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


int dd(int n)
{
	int i,z;
	if(n==1||n==2)
		z=1;
	else
	z=dd(n-1)+dd(n-2);

	return z;

}

int main()
{
	int m,i,a,b;
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
	scanf("%d",&a);
	printf("%d",dd(a));
	if (i<m-1)
		printf("\n");
	}

}