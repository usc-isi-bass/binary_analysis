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
	int a[100][100]={2};
	int i,j,n,n1=-1,n2=-1,n3,n4;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				n3=i;
				n4=j;
				if(n1>=0 || n2>=0)
					continue;
				else 
				{
					n1=i;
					n2=j;
				}
			}
		}
	}

	printf("%d",(n3-n1-1)*(n4-n2-1));
	return 0;
}

