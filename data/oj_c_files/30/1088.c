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
	int n,i,a,sam;
	sam=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
			sam=sam;
		else
		{
			if(i<10)
			{
				if(i!=7)
					sam=sam+i*i;
				else
					sam=sam;
			}
			else
			{   if(i/10==7)
			     sam=sam;
			    else
				{
					a=i%10;
				    if(a==7)
					sam=sam;
				    else
					sam=sam+i*i;
				}
			}
		}
		
	}
	printf("%d",sam);
	return 0;
}