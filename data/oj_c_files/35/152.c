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
	int m,n,i,j,max=0,flag=1;
	int k,t;
	scanf("%d,%d",&m,&n);
	int a[8][8];
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
			if(a[i][j]>max) {k=j;max=a[i][j];}
		for(t=0;t<=m-1;t++)
			if(a[t][k]<max) break;
		if(t==m)
		{
			printf("%d+%d",i,k);
			flag=0;
			break;
		}
	}
	if(flag==1) printf("No");
}
