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
	int n,a[20000],i,j,h=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1){
		scanf("%d",&a[i]);
	}
	printf("%d",a[0]);
	for(j=1;j<n;j=j+1){
		for(k=0;k<j;k=k+1){
			if(a[j]==a[k]) {h=1;}
		}
		if(h==0){printf(" %d",a[j]);}
	
		else{h=0;}
 

	}







}