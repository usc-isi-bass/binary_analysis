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
	int i,j,a[100][100],n,s=0,S,h1=0,h2=0,l1=0,l2=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{	
			scanf("%d",&a[i][j]);
			if (a[i][j]==0 && s==0)
			{
				l1=i+1;
				h1=j+1;
				s=1;
			}
		}
	for (i=n-1;i>=0;i--)
		for (j=n-1;j>=0;j--)
			if (a[i][j]==0 && s)
			{
				l2=i;
				h2=j;
				s=0;
			}
	S=(l2-l1)*(h2-h1);
	printf("%d\n",S);
    return 0;
}
