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
	void same(char a[],char b[]);
	char a[1000],b[1000];
	scanf("%s%s",a,b);
	same(a,b);
}
void same(char a[],char b[])
{
	int i,j,t,n;
	if(strlen(a)==strlen(b))
	{
	for(j=0;j<strlen(a)-1;j++)
		for(i=0;i<strlen(a)-1-j;i++)
			if(a[i]>=a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(j=0;j<strlen(b)-1;j++)
		for(i=0;i<strlen(b)-1-j;i++)
			if(b[i]>=b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
	for(i=0,n=0;i<strlen(a)-1;i++)
	{
		if(a[i]==b[i])
			n++;
		else break;
	}
	if(n==strlen(a)-1)
		printf("YES");
	else
		printf("NO");
	}
	else
		printf("NO");
}