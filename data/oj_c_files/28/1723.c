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
	char a[3000];
	int b[300],c[300]={0};
	gets (a);
	int i,j,k,l,m,n;
	l=strlen (a);
	b[0]=-1;
	m=1;
	n=0;
	for(i=0;i<l;i++)
	{
		if(a[i]==' ' && a[i-1]!=' ')
		{
			b[m]=i;
			c[n]=c[n]+b[m]-b[m-1]-1;
			m++;
			n++;
		}
		if(a[i]==' ' && a[i-1]==' ')
		{
			c[n]--;
		}
	}
	b[m]=l;
	c[n]=c[n]+b[m]-b[m-1]-1;
	for(i=0;i<n;i++)
	{
		printf("%d,",c[i]);
	}
	printf("%d",c[n]);
	return 0;
}