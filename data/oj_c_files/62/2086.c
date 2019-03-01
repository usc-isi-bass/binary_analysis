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
	char c[101],i,j=1,k;
	for (j=1;;j++)
	{
		c[j]=getchar();
		if (c[j]=='\n')
			break;
	}
	for (i=1;i<=j;i++)
	{
		if (c[i]==' ')
		{
			for (k=i+1;;k++)
			{
				if (c[k]==' ')
					c[k]=1;
				else
					break;
			}
		}
	}
	for (k=1;k<=j;k++)
	{
		if (c[k]!=1)
			putchar(c[k]);
	}
	return 0;
}