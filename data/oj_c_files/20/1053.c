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
	int a[11],i,j,b,c,n,k;
	char str[11],substr[4],max;
	for(i=0;;i++)
	{
		int d=0;
		if(scanf("%s%s",str,substr)==EOF) break;
		b=strlen(str);
		c=strlen(substr);
		max=str[0];
		for(j=0;j<b;j++)
		{
			if(str[j]-max>0) max=str[j];
		}
		for(j=0;j<b;j++)
		{
			printf("%c",str[j]);
			if(str[j]==max) break;
		}
		printf("%s",substr);
		for(k=j+1;k<b;k++)
		{
			printf("%c",str[k]);
		}
		printf("\n");
	}
	return 0;
}


		
