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
	int i,j,n;
	char a[10000];
	gets(a);
	n=strlen(a);
	j=0;
	for(i=0;i<=n;i++)
	{
		if(a[i]!='\0')	
		{
			if(a[i]!=' ')
				j++;
			else
			{
				if(a[i+1]!=' ')
				{
					printf("%d,",j);
			    j=0;
				}
			}
		}
		else
			printf("%d",j);
	}
}
