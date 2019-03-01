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
	int n,m,i,j,col=0,line=0,k=0,a[8][8],l;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		if(a[i][j]>a[i][line]) line=j;
		for(l=0;l<n;l++)
		if(a[i][line]>a[l][line]) break;
		if(l==n)
		{
			col=i;
			k=1;
			break;
		}
		line=0;
	}
	if(k==0) printf("No\n");
	else printf("%d+%d\n",col,line);
}
	
		