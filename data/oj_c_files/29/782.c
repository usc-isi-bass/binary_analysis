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
    int n[sum];

	int i,j,m,e,a=1,b=1;
    double s=0;
	scanf("%d",&m);
    for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}

	for(i=0;i<m;i++){
		for(j=0;j<n[i];j++){
	        e=a;
            a=a+b;
	        b=e;
	        s+=1.0*a/b;
		}
		printf("%.3lf",s);
		printf("\n");
            a=1;
            b=1;
	   s=0;		
	}


	return 0;
}
