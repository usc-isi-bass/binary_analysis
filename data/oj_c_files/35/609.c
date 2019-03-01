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
	int i,j,k,m,n,a[8][8],b=0,c[8]={0},l=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i][j]>a[i][j-1])
				b=j;
			else b=0;
		}
		for(k=1;k<m;k++)
		{
			if(a[k][b]<a[k-1][b])
				c[i]=k;
		}
		if(c[i]==i) 
		{
			printf("%d+%d\n",b,i);
			l=l+1;
		}
	}
	if(l==0) printf("No\n");


}
