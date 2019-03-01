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

int sushu(int x)
{
	int z,t,k;
	k=(int)sqrt(x);
	for(t=2;t<=k;t++)
		if(x%t==0) break;
		if(t>k) z=1;
			else z=0;
			return z;
}
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;j<=i;j=j+2)
			if(sushu(j)&&sushu(i-j))
			{
			printf("%d=%d+%d\n",i,j,i-j);
			break;
			}
	}
}
