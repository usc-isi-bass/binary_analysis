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
	char s[100];
	int i=0,n,j=0;
	gets(s);
	while(s[i]!=' ')
	{
		i++;
	}
	n=i;
	while(n)
	{
		while(j<n)
		{
			if(s[j]!=s[i+1+j])
				break;
			if(j==n-1)
			{
				printf("%d\n",i-n);
				n=0;
			}
			j++;
		}
		i++;
	}
}
