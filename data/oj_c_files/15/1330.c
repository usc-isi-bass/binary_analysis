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
	int n,i,j,m;
    int a=0,c=0,b=0,d=0;
	int s[1000][1000];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf("%d",&s[i][j]);
    for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				if (s[i][j]==0)
				{
					a=i;
                    b=j;
                    break;
				}
				if(s[a][b]==0)
					break;
		}
		for (i=0;i<n;i++)			
          for (j=0;j<n;j++)
		    if (s[i][j]==0&&c<=i&&d<=j)
			{
				c=i;
                d=j;
			}
			m=(d-b-1)*(c-a-1);
			printf("%d\n",m);
			return 0;
}
