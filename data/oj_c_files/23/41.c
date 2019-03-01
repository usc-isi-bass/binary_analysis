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
	int l,m,k=1,i=0,q,a[1000];
	char p[1000];
	gets(p);
	l=strlen(p);
	for(m=0;m<l;m++)
	{
		if(p[m]==' ')
		{
			a[k]=m+1;
			k++;
		}
	}
	a[0]=0;
	a[k]=l+1;
	for(i=k-1;i>=1;i--)
	{
		for(q=a[i];q<a[i+1]-1;q++)
		{
			printf("%c",p[q]);
		}
		printf(" ");
	}
	{
		for(q=a[0];q<a[1]-1;q++)
		{
			printf("%c",p[q]);
		}
	}
}
