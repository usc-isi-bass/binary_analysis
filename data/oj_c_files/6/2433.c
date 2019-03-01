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
	int K,i,j,k,m,n,a[100][100]={0},sum,p,q,result[100]={0};
	scanf("%d",&K);
	for(i=1;i<=K;i++){
		sum=0;
		scanf("%d%d",&m,&n);
		for(j=0;j<m;j++)
			for(k=0;k<n;k++)
				scanf("%d",*(a+j)+k);
		if(m==1){
		for(q=0;q<n;q++)
			sum=sum+*(*(a+0)+q);
		for(p=1;p<m-1;p++)
			sum=sum+*(*(a+p)+0)+*(*(a+p)+n-1);
		}
		if(m>1){
		for(q=0;q<n;q++)
			sum=sum+*(*(a+0)+q)+*(*(a+m-1)+q);
		for(p=1;p<m-1;p++)
			sum=sum+*(*(a+p)+0)+*(*(a+p)+n-1);
		}
		printf("%d\n",sum);
	}
	return 0;
}