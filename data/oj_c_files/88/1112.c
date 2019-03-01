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

int sz(char a)
{
	int m=0;
	if(('0'<=a)&&(a<='9'))
		m=1;
	return m;
}
int main()
{
	int i,n,k=0;
	char *p,a[30];
	gets(a);
	p=a;
	n=strlen(a);
	for(i=0;i<n;i++,p++)
	{
		if(sz(*p)==1)
		{
			printf("%c",*p);
			k=1;
		}
		else
		{
			if(k==1)
			{
				printf("\n");
				k=0;
			}
		}
	}
	return 0;
}