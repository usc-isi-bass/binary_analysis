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
	int i,j,n,m,a[100][100],l;
	scanf("%d %d",&n,&m);
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)a[i][j]=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)scanf("%d",&a[i][j]);
	l=n+m;
	for(i=0;i<=l;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j<n&&(i-j)<m)
			printf("%d\n",a[j][i-j]);
		}
	}
}