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
	char a[500];
	int i,j,l,k,m=0;
	gets(a);
	for(i=2;i<=strlen(a);i++)
	{
		for(j=0;j<=(strlen(a)-i);j++)
		{
			for(l=j,k=j+i-1;l<=k;l++,k--)
			{
				if(a[l]==a[k])
				m=1;
				else
				{
					m=0;
					break;
				}
			}
			if(m==1)
			{
				for(k=j;k<j+i;k++)
				printf("%c",a[k]);
				printf("\n");
			}
		}
	}
	
	return 0;
}
