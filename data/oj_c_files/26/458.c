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
	char s[1000],d;
	int i,w=0,k,n,m,sd[1000];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
		sd[i]=1;
	for (i=1;i<n;i++)
	{
		sd[i]=sd[i-1];
		if (s[i]==32)
			sd[i]--;
		if (s[i]!=32&&(sd[i-1]<=0))
			sd[i]=1;
	}
	for (i=0;i<n;i++)
	{if (sd[i]>=0)
		printf("%c",s[i]);
	}
}
