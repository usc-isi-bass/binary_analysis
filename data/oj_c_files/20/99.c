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
	int i,asc,n=0;
	char str[11],substr[4],*p;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		p=str;
		asc=*p;
		for(i=0;i<strlen(str);i++,p++)
		{
			if(*p>asc)
			{
				asc=*p;
				n=i;
			}
		}
		p=str;
		for(i=0;i<=n;i++)
			printf("%c",str[i]);
		 printf("%s",substr);
		 for(i=n+1;i<strlen(str);i++)
			printf("%c",str[i]);
printf("\n");
	}
}

