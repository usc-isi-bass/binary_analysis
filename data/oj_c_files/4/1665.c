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
	int p[1000][1000];

	int a,b,i,j,k;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<a+b-1;i++)
	{
		if(i<b) k=0;
		if(i>=b) k=i-b+1;
		for(j=k;j<=i&&j<a;j++)
		{
			printf("%d\n",p[j][i-j]);
		}
	}
}
