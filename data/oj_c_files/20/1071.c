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
	int i,j,a,b,max;
	char str[11],substr[4],mix[14]; 
	while (scanf("%s%s",str,substr)!=EOF)
	{
		
		a=strlen(str);
		b=strlen(substr);
		max=0;
		j=0;
        for (i=0;i<a+b;i++)
		{
			mix[i]=0;
		}

		for(i=0;i<a;i++)
		{
			if(str[i]>max)
			{
				max=str[i];
			    j=i;
			}
		}
		
		for(i=0;i<a+b;i++)
		{
			if(i<=j)
			{
				mix[i]=str[i];
			}
			if(i>j && i<=j+b)
			{
				mix[i]=substr[i-j-1];
			}
			if (i>j+b && i<a+b)
			{
				mix[i]=str[i-b];
			}
			printf("%c",mix[i]);
		}
		printf("\n");
		
	}
}








