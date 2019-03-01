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
	int n,i,max,m;
	char str[11],substr[4],temp[10];
	while(scanf("%s %s",str,substr)!=EOF)
	{
		max=str[0];
		n=strlen(str);
		for(i=0;i<n;i++)
		{
			if(str[i]>max) 
			{
				max=str[i];
				m=i;
			}
		}
		for(i=0;i<=m;i++)
		{
			printf("%c",str[i]);
		}
		printf("%s",substr);
		for(i=m+1;i<n;i++)
		{
			printf("%c",str[i]);
		}
		printf("\0");
		printf("\n");
	}
	return 0;
}
