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
	
	char str[20],substr[10],max;
	int i,n,j,max_index;
	while(scanf("%s %s",str,substr)!=EOF)
	{
	    n=strlen(str);
		char *p;
		p=&str[0];
		max=*p;
		for(i=0;i<n;i++)
		{
			if(*(p+i)>max)
			{
				max=*(p+i);
				max_index=i;
			}
		}
		for(i=0;i<=max_index;i++)
			printf("%c",str[i]);
		printf("%s",substr);
		for(i=max_index+1;i<n;i++)
			printf("%c",str[i]);
		printf("\n");
	}
}

