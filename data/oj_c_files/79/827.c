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


int joseph(int n,int m)
{
	int mon[300];
	int i,j,f;

	for (i=0;i<n;i++)
		mon[i]=i+1;//????? ?n?
	for (i=-1,j=0;n!=1;)
	{
		i=i+1;
		j=j+1;
		if (i>=n)
			i=0;
		if (j==m)
		{
			for (f=i;f<n-1;f++)
				mon[f]=mon[f+1];
			n=n-1;
			j=0;
			i=i-1;
		}
	}
	return mon[0];
}


void main()
{
	int n[100],m[100],t,king;
	int i;

	for (i=0;;i++)
	{
		scanf("%d %d",&n[i],&m[i]);
		if (n[i]==0)
			break;
	}
	t=i;
	for (i=0;i<t;i++)
	{
		king=joseph(n[i],m[i]);
		printf("%d",king);
		if (i!=t-1)
			printf("\n");
	}
}
