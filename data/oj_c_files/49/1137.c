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

void main(void)
{
	char a[501];
	int i,j,l,n,k;
	gets(a);
	n=strlen(a);
	for(l=2;l<=n;l++)
	{
		for(i=0;i<=n-l;i++)
		{
			k=1;
			for(j=0;j<=l/2;j++)
			{
				if(a[i+j]==a[i+l-1-j])
					k=k*1;
				else
				{
					k=k*0;
					break;
				}
			}
			if(k)
			{
				for(j=0;j<l;j++)
					printf("%c",a[i+j]);
				printf("\n");
			}
		}
	}
}