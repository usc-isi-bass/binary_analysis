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


void f(char a[500])
{
	int i,n;
	char b[500];
	n=strlen(a);
	for(i=0;i<=499;i++)
	{
		if(i<=n-1) b[i]=a[n-1-i];
		else b[i]='\0';
	}

	if(strcmp(a,b)==0) puts(a);
}

void main(void)
{
	char s[500];
	gets(s);
	int n=strlen(s);

	int l;
	for(l=1;l<=n-1;l++)
	{
		char a[500];
		int i;
		for(i=0;i<=n-1-l;i++)
		{
			int k;
			for(k=0;k<=499;k++)
			{
				if(k<=l) a[k]=s[i+k];
				else a[k]='\0';
			}

			f(a);
		}
	}
}