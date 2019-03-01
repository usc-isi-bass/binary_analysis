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
	int n,i,t,num[300],sum=0,k,m;
	float a,c[300],mc=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		num[i]=t;
		sum+=num[i];
	}
	a=(float)sum/(float)n;
	for(i=0;i<n;i++){
		if(num[i]>a)
			c[i]=(float)num[i]-a;
		else
			c[i]=a-(float)num[i];
	}
	for(i=0;i<n;i++){
		if(c[i]>mc){
			mc=c[i];
			k=i;
		}
	}
	for(i=0;i<n;i++){
		if(c[i]>=mc){
			mc=c[i];
			m=i;
		}
	}
	if(m==k)
		printf("%d",num[k]);
	else if(num[k]>num[m])
		printf("%d,%d",num[m],num[k]);
	else
		printf("%d,%d",num[k],num[m]);
	return 0;
}