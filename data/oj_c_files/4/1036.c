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
	int a[100][100]={0};
	int m,n ,i,j;
	scanf("%d %d",&m,&n);
	for(i=j=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	for(i=j=0;i<=n+m-2;i++)
		for(j=0;j<=i;j++)
			if(j>=0&&j<m&&i-j>=0&&i-j<n)
				printf("%d\n",a[j][i-j]);
}