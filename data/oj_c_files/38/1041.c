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
	int k,j,n,i;
	double sum=0,ave=0,s=0,out;
	double sz[100];
	scanf("%d",&k);
	for(j=1;j<=k;j++){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%lf",&*(sz+i));
			sum=sum+*(sz+i);
		}
		ave=sum/n;
		for(i=0;i<n;i++){
			s=s+(*(sz+i)-ave)*(*(sz+i)-ave);
		}
		out=sqrt(s/n);
		printf("%.5f\n",out);
		sum=0;
		s=0;
	}
	return 0;
}
