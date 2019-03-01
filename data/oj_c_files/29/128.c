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
	int n,i,m[1000],k,f0=1,f1=2,f2;
	double q[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
	   scanf("%d",&m[i]);
	}
    for(i=0;i<n;i++){
f0=1,f1=2;
		for(k=0;k<m[i];k++){
			q[i]+=1.0*f1/f0;
			f2=f1+f0;
			f0=f1;
			f1=f2;
		}
	}
for(i=0;i<n;i++){
	printf("%.3lf\n",q[i]);
}
           return 0;
}