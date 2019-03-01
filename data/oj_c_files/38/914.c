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
	double num[1000];
	double *p;
	p=num;                    
	double sum,aver,a;
	int n,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=0;
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%lf",p+j);
			sum+=(*(p+j));
		}
		aver=sum/m;
		sum=0;
		for(j=0;j<m;j++){
			sum+=pow(((*(p+j))-aver),2);
		}
		a=sqrt(sum/m);
		printf("%.5lf\n",a);
	}
	return 0;
}