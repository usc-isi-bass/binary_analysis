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
int a[1000];
int n,k,i,j,sum,res;
scanf("%d %d\n",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
res=0;
for(i=0;i<n;i++){
	sum=0;
	for(j=0;j<n;j++){
	sum=a[i]+a[j];
	if(sum==k){
		res=res+1;
	}
	}
}
if(res==0){printf("no");}else{printf("yes");}
return 0;
}
