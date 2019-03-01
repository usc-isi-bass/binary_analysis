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
	int b,i,c;
	scanf("%s",a);
	b=strlen(a);
	i=0;
	if(b%2==0)
	{
		while(i<=(b/2-1))
		{
			c=a[b-1-i];
			a[b-1-i]=a[i];
			a[i]=c;
			i++;
		}
	}
	else
	{
			while(i<=((b-1)/2-1))
			{
				c=a[b-1-i];
				a[b-1-i]=a[i];
				a[i]=c;
				i++;
			}
	}
	printf("%s\n",a);
	return 0;
}
