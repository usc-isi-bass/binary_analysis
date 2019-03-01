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
	char s[1201];
	int i,l,d[301]={0},k,max,les;
	gets(s);
	l=strlen(s);
	k=0;
	for (i=0;i<l;i++)
	{
		if (s[i]!=',')
		     d[k]=d[k]*10+s[i]-'0';
		if (s[i+1]==',') k++;
	}
	les=-1;max=d[0];
	for (i=1;i<=k;i++)
	{
		if (d[i]>max)
		{
			les=max;
			max=d[i];
		}
		if (d[i]>les&&d[i]<max) les=d[i];
	}
	if (les==-1) printf("No");
	else printf("%d",les);
}

