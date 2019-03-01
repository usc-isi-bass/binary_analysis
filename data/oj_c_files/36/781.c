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
	char a[20],b[20];
	int g,e,f=1,i,c[250]={0},d[250]={0};
	scanf("%s%s",a ,b);
	e=strlen(a);
	g=strlen(b);
	if(e!=g)
	{
		f=0;
	}
	for(i=0;i<e;i++)
	{
		c[a[i]]++;
	}
	for(i=0;i<g;i++)
	{
		d[b[i]]++;
	}
	for(i=0;i<250;i++)
	{
		if(c[i]!=d[i])
		{
			f=0;
		}
	}
	if(f==0)
	{
		printf("NO");
	}
	if(f==1)
	{
		printf("YES");
	}
	return 0;
}