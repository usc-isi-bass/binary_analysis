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
	double s,l,t;
	int i,j,k,m;
	s=2;
	l=1;
	
	
	double b=0,c;
	int a[100];
	scanf("%d", &m);
	for(i=1;i<=m;i++)
	{
		scanf("%d", &a[i]);
	}
	
		for(k=1;k<=m;k++)
		{
		for(j=1;j<=a[k];j++)
		{
			c=s/l;
			b=b+c;
			t=l+s;
			l=s;
			s=t;
		}
		printf("%.3f", b);
		b=0;
		s=2;
		l=1;
		printf("\n");
		}
		return 0;
}