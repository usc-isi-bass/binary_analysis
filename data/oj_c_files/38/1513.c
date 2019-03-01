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

int main(){
	int k,i;
	scanf("%d",&k);
	for (i=0;i<k;i++){
		int n,j;
		double num[100],aver,sum=0,s=0;
		double * p;
		p=num;
		scanf("%d",&n);
		for (j=0;j<n;j++){
			scanf("%lf",p+j);
			s+=*(p+j);
		}
		aver=s/n;
		for (j=0;j<n;j++){
			sum+=((*(p+j)-aver)*(*(p+j)-aver));
		}
		sum/=n;
		s=sqrt(sum);
		printf("%.5lf\n",s);
	}
	return 0;
}

