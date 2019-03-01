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

int reverse(int n);
int main()
{
	int a,n;
	for(a=0;a<=5;a++)
	{
		scanf("%d",&n);
		n=reverse(n);
		//printf("%d",n);
	}
	return 0;
}

int reverse(int n)
{
	int a,b=1,z[10],max;
	if(n<0)
	{
		n=-n;
		printf("-");
	}
	if(n==0) 
	{
		printf("0\n");
		return 0;
	}
	for(a=0;a<=9;a++)
	{
		z[a]=n/b;
		b=b*10;
	}
    for(a=0;a<=9;a++)
	{
		b=z[a]/10;
		z[a]=z[a]-b*10;
	}
	b=0;
	for(a=9;a>=0;a--)
	{
		if((z[a-1]!=0)&&(b==0))
		{
			max=a-1;
			b=1;
			continue;
		}
		//if(b==1) printf("%d",z[a]);
	}
	b=0;
	for(a=0;a<=max;a++)
	{
		if((z[a]!=0)&&(b==0))
		{
			b=1;
			printf("%d",z[a]);
			continue;
		}
		if(b==1) printf("%d",z[a]);
	}
	printf("\n");
	return 0;
}