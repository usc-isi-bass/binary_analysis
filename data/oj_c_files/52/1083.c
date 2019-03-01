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
	int n,m;
	scanf("%d %d", &n, &m);
	int num[100];
	int *p=num;
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<m;i++){
		int templast=*(p+n-1);
		int j;
		for(j=n-1;j>=1;j--){
			*(p+j)=*(p+j-1);
		}
		*p=templast;
	}
	printf("%d",*p);
	for(i=1;i<n;i++){
		printf(" %d",*(p+i));
	}
	printf("\n");

	return 0;
}
