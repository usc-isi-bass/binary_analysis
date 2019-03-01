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
int n,k,i,j,a[9999],h,m=0,o=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
	for(j=0;j<n-1;j++){
	h=a[i]+a[j];
	m++;
	if(h==k){o++;}
	}
	}

if(o==0){printf("no");}else{printf("yes");}
return 0;
}