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
	int a[1000];
	int i,n,j,e,l,k;
	scanf("%d %d",&n,&k);
	

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

		e=a[0];
	for(i = 1 ; i <= n ; i++){
		for(j = 0; j < n -i; j++){
			if(a[j] > a[j+1]){
					e = a[j+1];
					a[j+1] = a[j];
					a[j] = e;
			}
		}
	}
	l=0;

	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]+a[j]==k){
				l++;
			}
		}
	}

	if(l==0){
		printf("no");
	}else{
		printf("yes");
	}

	return 0;
}