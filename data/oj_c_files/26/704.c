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
	int i,k,j;
	char a[101],*p[101];
	*p=a;

	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			if(k==1)
			continue;
			
			else
			{
				printf("%c",a[i]);
				k=1;
			}
		}
		else
		{
			k=0;printf("%c",a[i]);
		}
	}
	
}
