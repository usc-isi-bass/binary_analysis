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
	char s[50],w[50],c[50];
	scanf ("%s",s);
	scanf ("%s",w);
	int n=strlen (s);
	int m=strlen (w);
	int i,j;
	int l=1;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			c[j]=w[j+i];
		}
		c[j]='\0';
		l=strcmp(s,c);
		if (l==0)
			break;
	}
	printf("%d",i);
	return 0;
}