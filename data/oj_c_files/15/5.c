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
	int a,b[100][100]={1};
	scanf ("%d\n",&a);
	int i,j;
	for (  i=0;i<=a-1;i++)
	{
		for (  j=0;j<=a-1;j++)
		{
			scanf ("%d",&b[i][j]);
		};
	}
	int s=0,l=0;
	for (  i=0;i<=a-1;i++)
	{
		for (  j=0;j<=a-1;j++)
		{
			s=s+b[i][j];
		}
	    if (s==255*(a-2))
		{
			l=l+1;
		}
		s=0;
	}
	int t=0,k=0;
	for (  j=0;j<=a-1;j++)
	{
		for (  i=0;i<=a-1;i++)
		{
			t=t+b[i][j];
		}
	    if (t==255*(a-2))
		{
			k=k+1;
		}
		t=0;
	}
	
	int sum=l*k;
	printf("%d",sum);
}
