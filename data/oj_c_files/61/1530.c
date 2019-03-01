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
	int a[999],b[999],c[999],i,k,n,d[999];
		scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&d[i]);
		a[i]=1;
		b[i]=1;
	}
	for(i=0;i<n;i++){
		if(d[i]>=3){
			for(k=3;k<=d[i];k++){
			c[i]=a[i]+b[i];
			a[i]=b[i];
			b[i]=c[i];}
		printf("%d\n",c[i]);}
		else{printf("1");}
	}
		


	 return 0;
}