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
	int n,ans;
	scanf("%d",&n);
	if(n==1)printf("End");
	else
	{
		for(ans=n;ans!=1;)
		{
			if(ans%2)
			{
				printf("%d*3+1=%d\n\n",ans,ans*3+1);
				ans=ans*3+1;
			}
			else 
			{
				printf("%d/2=%d\n\n",ans,ans/2);
				ans=ans/2;
			}
		}
		printf("End");
	}
}
