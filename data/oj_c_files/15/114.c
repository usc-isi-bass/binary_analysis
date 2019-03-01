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
	int n;
	scanf("%d",&n);
	int s[100][100];
	int i,j;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				{
					scanf("%d",&s[i][j]);
				}
		}
	int i1,i2,j1,j2;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				{
					if(s[i][j]==0)
						{
							i1=i;
							j1=j;
							break;
						}
				}
		}
	for(i=n;i>=1;i--)
		{
			for(j=n;j>=1;j--)
				{	
					if(s[i][j]==0)
						{
							i2=i;
							j2=j;
							break;
						}
				}
		}
	int sq;
	sq=(j2-j1-1)*(i1-i2-1);
	printf("%d\n",sq);
	return 0;
}