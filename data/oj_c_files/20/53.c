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
	int i,j,k,max;
	char str[11],substr[4];
	while(scanf("%s %s",str,substr)!=EOF)
	{
		max=0;
		for(i=1;i<strlen(str);i++)
		{
			if(str[i]>str[max])
			{
				max=i;
			}
		}
		for(j=0;j<max+1;j++)
		{
			printf("%c",str[j]);
		}
		for(k=0;k<3;k++)
		{
			printf("%c",substr[k]);
		}
		for(j=max+1;j<strlen(str);j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
}
		
		

