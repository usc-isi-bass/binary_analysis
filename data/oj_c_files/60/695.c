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
	int n,i,j,a,b[10000],t=0;
	scanf("%d",&n);
	for(i=3;i<=n;i=i+2)
	{ 
		a=(int) (sqrt(i));
		for(j=2;j<=a;j++)
		if (i%j==0)break;
		if (j>a) 
		{
			b[t]=i;
			t++;
		}
	}
	if(n<5)
		printf("empty");
	else
	{
		for(i=0;i<t-1;i++)
			if(b[i+1]==b[i]+2)
				printf("%d %d\n",b[i],b[i+1]);
	}
}
