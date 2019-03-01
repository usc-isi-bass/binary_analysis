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
	int k,m,n,a[100][100];
	int i,j,r;
	
	scanf ("%d",&k);
	for (i=0;i<k;i++)
	{
                int b=0,c=0,d=0,e=0,sum=0;
		scanf ("%d%d",&m,&n);
		for (j=0;j<m;j++)
		{
			for (r=0;r<n;r++)
			{
				scanf ("%d",&a[j][r]);
			}
		}
		for (j=0;j<m;j++)
		{
			b+=a[j][0];
			d+=a[j][n-1];
		}
		for (r=1;r<n-1;r++)
		{
			c+=a[m-1][r];
			e+=a[0][r];
		}
		sum=b+c+d+e;
		printf ("%d\n",sum);
	}
	return 0;
}
