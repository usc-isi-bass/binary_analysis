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
	int a,k,i,j,s=0,m,n,*p[100][100];
	scanf("%d",&k);
	for(a=0;a<k;a++)
	{
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{p[i][j]=(int *)malloc(1*sizeof(int));
		scanf("%d",&*p[i][j]);
		if(j==n-1) scanf("\n");}
		}
	for(j=0;j<n;j++)
		s=s+(*p[0][j])+(*p[m-1][j]);
	for(i=1;i<m-1;i++)
		s=s+(*p[i][0])+(*p[i][n-1]);
	printf("%d\n",s);s=0;
	}
}


