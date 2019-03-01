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
    int n,i=0;
	scanf("%d",&n);
	int a[100],s=n-1;
	for(i=0;i<n-1;i++){
		scanf("%d \n",&a[i]);
	}
	scanf("%d",&a[n-1]);
	for(s=n-1;s>0;s--){
		printf("%d ",a[s]);
	}
	printf("%d",a[0]);
	return 0;
}
