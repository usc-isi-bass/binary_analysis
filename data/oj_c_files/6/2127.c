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
	int i,j,q;
	int k;
	int m,n;
	int a[110][110];
	int sum;
	scanf("%d",&k);  //k?
	for(i=0;i<k;i++)
	{
		sum=0;
		scanf("%d %d",&m,&n);
		for(j=0;j<m;j++)   //??
		{
			for(q=0;q<n;q++)  //??
			{
				scanf("%d",*(a+j)+q);  //????
			}
		}
	/*	for(j=0;j<m;j++)
		{
			for(q=0;q<n;q++)
			{
				printf("%d ",*(*(a+j)+q));
			}
			printf("\n");
		}*/                   //debug????bug
		for(j=0;j<n;j++)   //??
		{
			sum+=*(*a+j);
			if(m!=1)
			    sum+=*(*(a+m-1)+j);
		}
		for(j=1;j<m-1;j++)  //??
		{
			sum+=*(*(a+j));
			if(n!=1)   //???????????
			    sum+=*(*(a+j)+n-1);
		}
		printf("%d\n",sum);
	}
	return 0;
}
