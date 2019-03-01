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
	char s[300];
	int a[300],i=0,j;
	gets(s);
	for(i=0;i<strlen(s);i++)
		a[i]=(int)s[i];//48-57?0-9???
	for(i=0;i<strlen(s);i++)
	{
		if(a[i]>47&&a[i]<58)
		{
			for(j=0;j<strlen(s)-i;j++)
			{
				if(a[i+j]>47&&a[i+j]<58)
				{
					printf("%c",s[i+j]);
					continue;
				}
				else
				{
					printf("\n");
					break;
				}
			}
			i=i+j;
		}
	}
}

	
