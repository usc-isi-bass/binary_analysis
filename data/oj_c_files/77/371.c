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

void f(char s[],int n,int m)
{
	int i,b,g;
	char *s2;
	if(n==2)
		printf("%d %d\n",m,m+1);
	else
	{
		b=0;
		g=0;
		for(i=0;;i++)
		{
			if(s[i]==s[0])
				b++;
			else
				g++;
			if(b==g)
				break;
		}
		if(i==n-1)
		{
			s2=s+1;
			f(s2,n-2,m+1);
			printf("%d %d\n",m,m+n-1);
		}
		else
		{
			f(s,i+1,m);
			s2=s+i+1;
			f(s2,n-i-1,m+i+1);
		}
	}
}

void main()
{
	char s[100];
	int n;
	gets(s);
	n=strlen(s);
	f(s,n,0);
}