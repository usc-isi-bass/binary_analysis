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
	int i=1;
	int a[N],b[N];

	

	int n,q,num[N];
	scanf("%d",&n);
	for(q=1;q<=n;q++){
		scanf("%d",&num[q]);
	}

	double sum=0;
    for(q=1;q<=n;q++){
		for(i=1;i<=num[q];i++){
				a[1]=1;
	        a[2]=2;
         	b[1]=2;
	        b[2]=3;
			a[i+2]=a[i]+a[i+1];
        	b[i+2]=b[i]+b[i+1];
			sum=sum+(b[i]*1.0/a[i]);
		}
		printf("%.3lf\n",sum);
		sum=0;
	}
    return 0;
}





