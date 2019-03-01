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
	char c[100];
	int i,k,j,b=0,n,m=0;
	gets(c);
    n=strlen(c);
	for(i=n-1;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(c[i-j]==' ')
			{
				for(k=i-j+1;k<=i;k++)
				printf("%c",c[k]);
				printf(" ");
				m=i;
				b=j;
				break;
			}
		}
		i=i-j;		
	}
	if(m-b<=0)
	{
		for(k=0;k<n;k++)
			printf("%c",c[k]);
	}
	else
	{
	for(k=0;k<m-b;k++)
		printf("%c",c[k]);
	}
}
