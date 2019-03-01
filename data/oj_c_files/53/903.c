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
	int n,a[100],i,b[100],j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	b[0]=a[0];
	printf("%d",b[0]);
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				a[i]=0;}
		}
}
	for(i=1;i<n;i++){
		if(a[i]!=0){
			printf(",%d",a[i]);}
		}
	return 0;
}	
