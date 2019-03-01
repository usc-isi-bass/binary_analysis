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
	int sz[101];
	i=0;e=n-1;
	while(i<n){
		scanf("%d",&sz[i]);
		i++;
	}
	while(e>0&&e<n){
		printf("%d ",sz[e]);
		e--;	
}
printf("%d",sz[e]);

	return 0;
}
