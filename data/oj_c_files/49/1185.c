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
	int i,j,m,n,k;
	char c[500];
	scanf("%s",c);
	m=strlen(c);
	for(i=2;i<m;i++)
	{
		for(j=0;j+i<m+1;j++)
		{
			for(k=0,n=0;k<i;k++)
			{
				if(c[j+k]!=c[j+i-k-1])
					n++;
			}
			if(n==0)
			{
				for(k=0;k<i;k++)
				{
					printf("%c",c[j+k]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}