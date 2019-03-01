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
	int k,n,i,last1,last2,b,result;
	scanf("%d",&k);
    for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		if(n==1||n==2)
		{
			printf("1\n");
		}
		else
		{
			last1=1;
			last2=1;

			for(b=3;b<=n;b++)
			{
				result=last1+last2;
				last2=last1;
				last1=result;
			}
		    printf("%d\n",result);
		}
	}
	return 0;
}