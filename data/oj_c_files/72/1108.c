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
	int i,j,n,m,k,c=-1;
	int sz[N+2][N+2]={0},Hi[N*N],Hj[N*N];
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
		 scanf("%d",&sz[i][j]);
		} 
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i][j-1])
			{
                c++;
                Hi[c]=i-1;
                Hj[c]=j-1 ;
			}
		}
	}
    for(k=0;k<c;k++)
	{
       printf("%d %d\n",Hi[k],Hj[k]);
	}
    printf("%d %d",Hi[c],Hj[c]);
	return 0;
}