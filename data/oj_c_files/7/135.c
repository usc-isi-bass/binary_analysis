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
	char a[256],b[256],c[256];
	scanf("%s %s %s",a,b,c);
	char *p;
	p=strstr(a,b);
	if(p)
	{   
		int n=strlen(a)-strlen(p);
		int i;
		int k=strlen(b);
	    int l=strlen(c);
        int m=0;
	    for(i=0;i<n;i++)
		{
		   printf("%c",a[i]);
		}
	    for(i=n;i<n+l;i++)
		{
			printf("%c",c[m]);
			m++;
		}
		for(i=n+k;i<(strlen(a));i++)
		{
			printf("%c",a[i]);
		}
	}
	else
	{printf("%s\n",a);}
	return 0;
}