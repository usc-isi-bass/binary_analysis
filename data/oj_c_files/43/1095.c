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
	int a,i,j,n,m;
	scanf("%d",&a);
	for(i=3;i<a/2+1;i=i+2)
	{
		j=a-i;
			for(n=3;n<i;n=n+2)
			{
				if(i%n==0)
				{
					goto loop;
				}    
			}
			for(m=3;m<j;m=m+2)
			{
				if(j%m==0)
				{
					goto loop;
				}
			}
			printf("%d %d\n",i,j);
	loop: continue;
	}
	return 0;
} 