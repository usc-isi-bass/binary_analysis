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
	int i;
	int sz[100];
	int n,m;
	scanf("%d %d",&n,&m);
	for(i=0;i<n-m;i++){
		scanf("%d",&sz[m+i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n-1;i++){
		printf("%d ",sz[i]);
	}
	printf("%d",sz[n-1]);
	return 0;
}
