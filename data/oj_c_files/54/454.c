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
	int n,k,s=1,i,y,j,a=1;
	scanf("%d %d",&n,&k);
	for (i=1;i<=100000000;i++)
	{
		s=i;
		for(j=1,y=1;j<=n-1;j++)
		{
			if((s*n+k)%(n-1)==0) s=(s*n+k)/(n-1);
			else y=0;
		}
		if(y) 
		{
			s=s*n+k;
			printf("%d\n",s);
			a=0;
		}
		if(a==0) break;
	}
}