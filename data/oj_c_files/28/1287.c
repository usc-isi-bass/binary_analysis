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
	char x[3000];
	int n,i,j,a[300],b[300],A,B,c[300];
	gets(x);
	n=strlen(x);
	a[1]=0;
	A=1;
	B=0;
	for(i=0;i<n;i++)
	{
		if((x[i]!=' ')&&(x[i-1]==' '))
		{
			A=A+1;
			a[A]=i;
		}
		if(((x[i]!=' ')&&(x[i+1]==' '))||(x[i+1]=='\0'))
		{
			B=B+1;
			b[B]=i;
			c[B]=b[B]-a[A]+1;
		}
	}
	for(i=1;i<B;i++)
	{
		printf("%d,",c[i]);
	}
	printf("%d",c[B]);
}