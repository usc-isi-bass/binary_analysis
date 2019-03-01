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
	int n,i,j,a,b,c,d,s,first=0;
	int num[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(num[i][j]==0&&first==0)
			{
				a=i;
				b=j;
				first=1;
			}
			if(num[i][j]==0)
			{
				c=i;
				d=j;
			}
		}
	}
	s=(c-a-1)*(d-b-1);
	printf("%d",s);
	return 0;
}



