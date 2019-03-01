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

int a[1000],c,d;
void kg();
void m(int);
void r();
main()
{
	r();
	m(c);
	kg();
	m(d);
}
void r()
{
	scanf("%d%d",&c,&d);
}
void m(int s)
{
	int i,j,t;
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		for(j=0;j<s-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<s;i++)
	{
		printf("%d",a[i]);
		if(i<s-1)
			kg();
	}
}
void kg()
{
	printf(" ");
}