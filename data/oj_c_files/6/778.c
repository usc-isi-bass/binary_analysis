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

int main(int argc, char* argv[])
{
	int k,m,n,i,j,a,sum=0;
	int sz[100][100];
	scanf("%d",&k);
	for(a=0;a<k;a++)
	{
		scanf("%d%d",&m,&n);
		sum=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&sz[i][j]);
			    if(i==0||i==m-1) sum+=sz[i][j];
		    	if(i>0&&i<m-1&&(j==0||j==n-1)) sum+=sz[i][j];
			}
		}	
		printf("%d\n",sum);
	}

	return 0;
}

