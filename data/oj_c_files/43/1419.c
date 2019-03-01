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
	int m;
	int j;
	int i;
	int a,b,e;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		e=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				e++;
			}
		}
		if(e==0)
			{
				a=i;
				b=m-a;
				e=0;		
				for(j=2;j<b;j++)		
				{			
					if(b%j==0)			
					{				
						e++;			
					}
				}
				if(e==0)
				{
					printf("%d %d\n",a ,b);
				}
		}
	}
}
