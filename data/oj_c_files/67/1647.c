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
int n,s,i;
scanf("%d",&n);
int a[n],b[n];
double c[n];
for(i=0;i<n;i++){
	scanf("%d%d",&a[i],&b[i]);
	c[i]=1.0*b[i]/a[i];
}
for(i=1;i<n;i++){
	if(c[i]-c[0]>0.05){
		printf("better");
		printf("\n");
	}else if(c[0]-c[i]>0.05){
printf("worse");
		printf("\n");
	}else{
printf("same");
		printf("\n");
	}
}
return 0;
}