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
	int n, i, a[55]={0}, sign=0;
	char str[301];
	gets(str);
	n=strlen(str);
	for(i=0; i<n; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			a[str[i]-65]++;
			sign=1;
		}
		if(str[i]>=97 && str[i]<=122)
		{
			a[str[i]-71]++;
			sign=1;
		}
	}
	for(i=0; i<=25; i++)
	{
		if(a[i]!=0)
			printf("%c=%d\n",i+65,a[i]);
	}
	for(i=26; i<=51; i++)
	{
		if(a[i]!=0)
			printf("%c=%d\n",i+71,a[i]);
	}
	if(sign==0)
		printf("No\n");
}