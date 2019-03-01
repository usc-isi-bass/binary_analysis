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

int haha()
{
	int m,n,sum,i,j,a[105][105];
	scanf("%d%d",&m,&n);

	
				
				
				
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&*(*(a+i)+j));

		sum=0;

		if(m==1)
		for(j=1;j<=n;j++)
			sum=sum+*(*(a+1)+j);
		else
			if(n==1)
				for(i=1;i<=m;i++)
					sum=sum+*(*(a+i)+1);
				else
				{

		for(j=1;j<=n;j++)
			sum=sum+*(*(a+1)+j);
		
		for(j=1;j<=n;j++)
			sum=sum+*(*(a+m)+j);

		for(i=2;i<=m-1;i++)
			sum=sum+*(*(a+i)+1);
		
		for(i=2;i<=m-1;i++)
			sum=sum+*(*(a+i)+n);}


		return(sum);
}
int main()
{
 
int i,j,k,l,m,n,a[1050];



scanf("%d",&n);
for(i=1;i<=n;i++)
*(a+i)=haha();


for(i=1;i<=n;i++)
printf("%d\n",*(a+i));

  }

