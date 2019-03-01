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
	int (*a)[120],i,j,k,n,m;
	scanf("%d %d",&n,&m);
	a=(int(*)[120])malloc(200*sizeof(int));
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",*(*(a+i)+j));
	}*/
	for(k=0;k<=n+m-2;k++)                  //k?i?j???????????k?0?n+m-2?????
	{
		for(i=0;(i<=k)&&(i<n);i++)         //?????k???i?0???i??????i<=k?i<n
		{
			j=k-i;
			if(j<m)
			printf("%d\n",*(*(a+i)+j));
		}
	}
}