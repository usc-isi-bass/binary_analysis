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
	char a[260],b[260];
	int c[260]={0};
	int i;
	int la,lb;
	int t=0,s=0;
	int num(char c);
	gets(a);
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	for(i=259;i>=259-la;i--)
		a[i]=a[la+i-259];
	for(i=259;i>=259-lb;i--)
		b[i]=b[lb+i-259];
	for(i=0;i<259-la;i++)
		a[i]='0';
	for(i=0;i<259-lb;i++)
		b[i]='0';
	for(i=258;i>=0;i--)
	{
		if(num(a[i])+num(b[i])+t>=10)
		{
			c[i]=num(a[i])+num(b[i])+t-10;
			t=1;
		}
		else
		{
			c[i]=num(a[i])+num(b[i])+t;
			t=0;
		}
	}
	for(i=0;i<=258;i++)
	{
		if(c[i]!=0)
			s=1;
		if(s==1)
			printf("%d",c[i]);
	}
	if(s==0)
		printf("%d",s);
	printf("\n");
	return 0;
}

int num(char c)
{
	int n;
	n=c-'0';
	return n;
}