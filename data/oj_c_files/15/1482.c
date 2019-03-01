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
	int a[1000][1000],i,j;
	int n,s1,s2,l1,l2;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(a[i][j]==255&&a[i][j-1]==0&&a[i-1][j]==0&&a[i-1][j-1]==0)
			{
				s1=i;
				l1=j;
			}
            if(a[i][j]==0&&a[i][j+1]==255&&a[i+1][j]==255&&a[i+1][j+1]==255)
			{
				s2=i;
				l2=j;
			}
		}
	}
	printf("%d",(s2-s1)*(l2-l1));
	return 0;
}