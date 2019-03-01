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
	int a,b,n,i,j,z[100],x[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(z[i]));
	}
	for(i=0;i<n;i++){
		for(j=1;j<=z[i];j++){
			if(j==1){
				a=1;
				x[i]=a;
			}
			if(j==2){
                b=1;
				x[i]=b;
			}
			if(j>2){
                x[i]=a+b;
				a=b;
				b=x[i];
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",x[i]);
	}
	return 0;
}