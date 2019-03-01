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
	int a[8][8];
	int m,n; /*m,n?????????*/
	int i,i1,j,maxi,maxj;
	int flag=1;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		flag=1;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=a[i][0])
			{
				maxi=i;
				maxj=j;
			}
		}
		for(i1=0;i1<m;i1++)
		{
			if(a[i1][maxj]<a[maxi][maxj])
				flag*=0;
			else
				flag*=1;
		}
		if(flag==1)
		{	
			printf("%d+%d\n",maxi,maxj);
			break;
		}
	}
	if(flag==0)
		printf("No\n");
	return 0;
}

