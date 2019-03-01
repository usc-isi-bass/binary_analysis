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
	char c[100000],b;
	int a[100000]={0};
	int i,j,k,m,n;
	gets(c);
	for(i=0,m=0;(b=c[i])!='\0';i++)
	{
		if((b=c[i])!=' ')
			a[m]++;
		else
			if((b=c[i+1])!=' ')
			m++;
	}
	for(i=0;i<=m;i++)
	{
		if(i<=m-1)
			printf("%d,",a[i]);
		else
			printf("%d",a[i]);
	}
}