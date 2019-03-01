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
	int n;
	scanf("%d",&n);
	int sz[100];
	for(int a=0;a<=n-1;a++){
		scanf("%d",&(sz[a]));
	}
	for(int b=n-1;b>=1;b=b-1){
		printf("%d ",sz[b]);
	}
	printf("%d",sz[0]);
	return 0;
}