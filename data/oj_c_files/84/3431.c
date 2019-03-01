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
	int n,i;
	scanf("%d",&n);
	int sz[99];
	for(i=0;i<=n-1;i++){
		scanf("%d",&sz[i]);
	}
	int max,e;
	max=0;
	for(i=0;i<=n-1;i++){
		if(sz[i]>sz[max]){
			max=i;
		}
	}
	if(max!=n-1){
		e=sz[max];
		sz[max]=sz[n-1];
		sz[n-1]=e;
	}
	max=0;
	for(i=0;i<=n-2;i++){
		if(sz[i]>sz[max]){
			max=i;
		}
	}
	if(max!=n-2){
		e=sz[max];
		sz[max]=sz[n-2];
		sz[n-2]=e;
	}
	printf("%d\n",sz[n-1]);
	printf("%d\n",sz[n-2]);
	return 0;
}