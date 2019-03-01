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
int *a,sum,i,k,n,m,j=0;
scanf("%d",&k);
for (i=1;i<=k;i++)
{
	sum=0;
	scanf("%d%d",&m,&n);
	a=(int*)malloc(sizeof(int)*(n*m));
	for(j=0;j<n*m;j++)
	{
		scanf("%d",a+j);
		if ((j+1<=n)||(j>(n*m-n-1))||((j+1)%n==1)||((j+1)%n==0))
			sum+=*(a+j);
	}
         free(a);
	printf("%d\n",sum);
}

}
