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

void change(char x[50],int n)
{
	int i,j;
	char tem;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		if(x[i]>x[j])
		{
			tem=x[j];
			x[j]=x[i];
			x[i]=tem;
		}
}
void main()
{
	int len,n,i;
	char a[100],b[50],c[50];
	gets(a);
	len=strlen(a);
	if(len%2==0)
		printf("NO");
	else
	{
	n=(len-1)/2;
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		c[i]=a[i+n+1];
	}
	change(b,n);
	change(c,n);
	for(i=0;b[i]==c[i]&&i<n;)
		i++;
	if(i==n)
		printf("YES");
	else
		printf("NO");
}
}	
