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

void main(int argc, char* argv[])
{
	int loc[1000][1000];
	int m,n,p,q;
	int a;
	scanf("%d", &a);
	int i,j;
	for (i=0;i<a;i++)
	{
		for (j=0;j<a;j++)
		{
			scanf("%d",&loc[i][j]);
		}
	}
	for (i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if (loc[i][j]==0)
			{
				m=i;
				n=j;
				break;
			}
		}
		if (loc[m][n]==0)
		{
			break;
		}
	}
	for (i=a-1;i>=0;i--)
	{
		for (j=a-1;j>=0;j--)
		{
			if (loc[i][j]==0)
			{
				p=i;
				q=j;
				break;
			}
		}
		if (loc[p][q]==0)
		{
			break;
		}
	}
	int s;
	s=(p-m-1)*(q-n-1);
	printf("%d\n",s);
}