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
	char a[510],b[510];
	int x,y,i,p=0;
	double n,q;
	scanf("%lf",&n);
	scanf("%s",a);
	scanf("%s",b);
	x=strlen(a);
	y=strlen(b);
	if(x!=y)
	{
		printf("error");
	}
	else
	{
		for(i=0;i<x;i++)
		{
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
			{
				printf("error");
				return 0;
			}
			if(a[i]==b[i])
			p++;
		}
	q=n*x;
	if(p>q)
		printf("yes");
	else
		printf("no");

	}
return 0;
}