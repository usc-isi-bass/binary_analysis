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
	double a[MAX],j,sum=0,c,b,d;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<=a[i];j++){
			if(j==1){
			c=2;
			b=1;
			}
			sum+=c/b;
			d=b;
			b=c;
			c=c+d;
		}	
			printf("%.3lf\n",sum);
			sum=0;
		}
		return 0;
	}

