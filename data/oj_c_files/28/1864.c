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
    char a[10000];
	int i,j,l;
	gets(a);
	for(i=0;i<strlen(a);)
	{
		if(a[i]!=' ')
		{
			l=0;
			for(j=0;j<strlen(a);j++)
			{
				if(a[i+j]!=' ')
				{
					l++;
				}
				if((a[i+j]==' ')&&((i+j)!=(strlen(a)-1)))
				{
				    printf("%d,",l);
					break;
				}
				if((i+j)==(strlen(a)-1))
				{
					printf("%d",l);
					break;
				}
			}
			i=i+l;
		}
		else
			i++;
	}
	return 0;
}
