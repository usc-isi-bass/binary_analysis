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
	int n;
	scanf("%d",&n);
	int i;
	int j;
	for(i=0;i<n;i++){
		double sum=0;
		double ave;
		int num;
		scanf("%d",&num);
		double s[101];
		double *p;
		p=s;
		for(j=0;j<num;j++,p++){
			scanf("%lf",p);
			sum+=*p;
		}

		ave=sum/num;
		p=s;
		double total=0;
		for(j=0;j<num;j++,p++){
			total+=(*p-ave)*(*p-ave);
		}
		double result;
		result=sqrt(total/num);
		printf("%.5lf\n",result);
	}
	return 0;
}
