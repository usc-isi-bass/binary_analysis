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
	char str[11],substr[4],*p,ma;
	int i,m;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		
		p=str;
		ma=*p;
		m=0;

		for(i=0;i<strlen(str);i++,p++)
		{
			if(*p>ma)
			{
				ma=*p;
				m=i;
			}
		}

		p=str;

		for(i=0;i<=m;i++,p++)
			printf("%c",*p);
		printf("%s",substr);
		for(;i<strlen(str);i++,p++)
			printf("%c",*p);
		printf("\n");
	}
	
}

