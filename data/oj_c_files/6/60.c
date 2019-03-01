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
	int k,n,m,i,*p;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&m,&n);
		int j,sum=0;
		p=(int *)malloc(sizeof(int)*m*n);
		for(j=0;j<m*n;j++)
		{
			scanf("%d",p+j);
		    if(j<n||(j<n*m&&j>=(m-1)*n)||j%n==0||(j+1)%n==0)
				sum+=*(p+j);
		}
		printf("%d\n",sum);

	}
}