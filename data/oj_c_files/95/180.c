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
    char a[100];
	gets(a);
	int m=strlen(a);
	char b[100];
	gets(b);
	int n=strlen(b);
	int c;
	if(m>n)
		c=m;
	else
		c=n;


	int i;
	for(i=0;i<c;i++)
	{

		if(a[i]>64&&a[i]<91)
			a[i]+=32;
		if(b[i]>64&&b[i]<91)
			b[i]+=32;
     	if(a[i]>b[i])
		{
			printf(">");
			break;
		}
		else if(a[i]<b[i])
		{
			printf("<");
			break;
		}
		else
		{
			continue;
		}
	}
	if(i>=c)
	{
		printf("=\n");
	}
	return 0;
}