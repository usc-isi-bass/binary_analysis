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
	char c[500];
	int i,j,h,n,t,f;
	scanf("%s",c);
	h=strlen(c);
    for(i=2;i<=h;i++)
	{
		for(j=0;j<=h-i;j++)
		{ 
			n=-1;t=j;f=2*j+i-1;
			while(t<j+i)
			{
				if(c[t]==c[f-t])
				{
					n=t;
					t++;
				}
				else break;
			}
			if(n==i+j-1)
			{
				for(t=j;t<j+i;t++)
				{
					printf("%c",c[t]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
			
