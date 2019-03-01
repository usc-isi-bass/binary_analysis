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
	int m,i,j,n,k;
	scanf("%d",&m);
	for(i=3;i<=m;i=i+2)
	{
		j=m-i;
		for(n=2,k=0;n<i;n++)
		{
			if(i%n==0)
				k++;
		}
		if(k==0)
			for(n=2,k=0;n<j;n++)
		{
			if(j%n==0)
				k++;
		}
		if(k==0&&i<=j)
			printf("%d %d\n",i,j);
	}
		return 0;
}
