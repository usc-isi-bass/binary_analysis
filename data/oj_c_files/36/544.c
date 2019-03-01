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

void change(char x[])
{
	int i,j,l;
	char c;
	l=strlen(x);
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(x[i]>x[j]) { c=x[i]; x[i]=x[j]; x[j]=c; }
		}
	}
}
void main()
{
	int d;
	char a[101]={'\0'},b[101]={'\0'};
	scanf("%s%s",a,b);
	change(a);
	change(b);
	if((d=strcmp(a,b))==0) printf("YES");
	else printf("NO");
}