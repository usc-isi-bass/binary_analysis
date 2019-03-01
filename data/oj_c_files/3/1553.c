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
	int n,k;
	int a[1000];
	int i,j,e;
	int s=0,q=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=n-1;j>0;j--){
		for(i=0;i<j;i++){
			e=a[i]+a[j];
			if(e==k){
				s++;
			}
		}
	}
	if(s==0){
		printf("no");
	}
	else{
		printf("yes");
	}
	return 0;
}