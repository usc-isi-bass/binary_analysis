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
	int m,n,i,j,k,c=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		j=i;for(k=0;j>0;)k=k*10+j%10,j=j/10;if(k==i)
		{
			for(j=2;j<i;j++)if(i%j==0)break;if(j==i){if(c)printf(",%d",i);else printf("%d",i);c++;}
		}
	}
	if(c==0)printf("no");
}
	
