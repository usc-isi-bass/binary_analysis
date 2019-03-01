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
	int a[5000],b[1000];
	int i,n,k;
	scanf("%d",&k);
	a[0]=1;
	a[1]=1;
	for(i=0;i<1000;i++){
		a[i+2]=a[i+1]+a[i];
	}
	for(i=0;i<k;i++){
	    scanf("%d",&b[i]);
	}
	 for(i=0;i<k-1;i++){
	     printf("%d\n",a[b[i]-1]);
	}
	 printf("%d",a[b[k-1]-1]);
	return 0;
}
