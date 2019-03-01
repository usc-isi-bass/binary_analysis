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
	int n,i,e;
	scanf("%d",&n);
    int *shuzu=(int*)malloc(sizeof(shuzu)* n);
	for(i=0;i<n;i++){
		scanf("%d",&shuzu[i]);
	}
	for(i=0;i<n/2;i++){
		e=shuzu[i];
		shuzu[i]=shuzu[n-1-i];
		shuzu[n-1-i]=e;
	}
	for(i=0;i<n-1;i++){
		printf("%d ",shuzu[i]);
	}
	printf("%d",shuzu[n-1]);
	return 0;
}