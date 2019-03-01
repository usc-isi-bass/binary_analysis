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
	int m,i,n,j,a=1,b=1,c=1,d=1;
	double he,sum=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			
			a=c+d;
			b=c;
			c=a;
			d=b;
			sum+=(a*1.0)/b;
		}
		printf("%.3lf\n",sum);
		sum=0;
		a=1;
		b=1;
		c=1;
                  d=1;
	}
	return 0;
}
