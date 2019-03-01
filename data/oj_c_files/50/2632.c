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
	int a[12]={0,31,28,31,30,31,30,31,31,30,31,30},b[13]={0},i,j,k,w;
	scanf("%d",&w);
	k=(w+5)%7;
	b[1]=k;
	for(i=2;i<=12;i++)
	{
		b[i]=(b[i-1]+a[i-1])%7;
	}
	for(i=1;i<=12;i++)
	{
		if(b[i]==5)
			printf("%d\n",i);
	}
	return 0;
}