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
	int sz[400];
	int j,n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(j=0;j<n;j++){
		sz[200+j]=sz[j];
	}

	for(i=0;i<m;i++){
		sz[i]=sz[200+n-m+i];
	}
	for(i=0;i<n-m;i++){
		sz[m+i]=sz[200+i];
	}

	printf("%d",sz[0]);
	for(i=1;i<n;i++){
		printf(" %d",sz[i]);
	}
	return 0;
}


