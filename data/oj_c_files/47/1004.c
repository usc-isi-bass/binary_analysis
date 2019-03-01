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
	int a[10000],n,b,i;
	i=1;
	scanf("%d",&n);
	while(i<n){
		scanf("%d ",&a[i]);
		i++;
	}
	scanf("%d",&a[n]);
	i=1;
	while(i<=n/2){
		b=a[n-i+1];
		a[n-i+1]=a[i];
		a[i]=b;
		i++;
	}
	i=1;
	while(i<n){
		printf("%d ",a[i]);
		i++;
	}
	printf("%d",a[n]);
	return 0;
}