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
	char a[3600];
	gets(a);
	char *p;
	int len,n;
    len=strlen(a);
	n=0;
	for(p=a;p<=a+len;p++)
	{
		if(*p!=' ')
		{ 
			n=n+1;
		}
		else if(*p==' '&&n!=0)
		{
			printf("%d,",n);
			n=0;
		}
	}
	printf("%d",n-1);
}