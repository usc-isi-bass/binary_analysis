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

void main() {
	int a[10000];
	int i,j;
	scanf("%d",&a[0]);
	if(a[0]==1){
		printf("End\n");
	}else{
		for(i=0;a[i]!=1;i++){
			if(a[i]%2==1){
				a[i+1]=a[i]*3+1;
				printf("%d*3+1=%d\n",a[i],a[i+1]);
			}else{
				a[i+1]=a[i]/2;
				printf("%d/2=%d\n",a[i],a[i+1]);
			}
		
			}
		printf("End\n");
	}
}