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
	int n,k,p,last_apple,real=0,now_apple;   //n??????k?????
	scanf("%d%d",&n,&k);
	for(last_apple=1;real==0;last_apple++)
	{
		if(last_apple%(n-1)==0)
		{
			now_apple=last_apple/(n-1)*n+k;
			for(p=1;p<n;p++)
			{
				if(now_apple%(n-1)==0)
				{
					now_apple=now_apple/(n-1)*n+k;
				}
				else p=n;
			}
		}
		if(p==n)
		{
			printf("%d",now_apple);
			real=1;
		}
	}
}