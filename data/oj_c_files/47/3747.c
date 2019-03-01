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

int main()
{
	int n,a[100],i,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[n-i-1]=a[i];
	}
	for(i=0;i<n;i++){
		a[i]=b[i];
		if(i==0){
			printf("%d",a[i]);}
		else{
			printf(" %d",a[i]);}
	}
	return 0;
}