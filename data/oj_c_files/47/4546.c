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

int main () {
	int a[100],n,i,b[50];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++) {
		scanf("%d", &a[i]);}
	for(i=0;i<=(n-1)/2;i++){
        b[i]=a[n-i-1];
	    a[n-i-1]=a[i];
		a[i]=b[i];}
    for(i=0;i<=n-1;i++){
		if (i<=n-2){
		printf("%d ",a[i]);}
		else{printf("%d",a[i]);}}
		return 0;
	}

		
	
	
		