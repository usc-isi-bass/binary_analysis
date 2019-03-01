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
	int sz[500];
	int i,n,j,a=0;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d", &(sz[i]));
	}
	for(i=0;i<n;i++){
		if(sz[i]%2==1)
		if(a<sz[i])
			a=sz[i];
	}
	for(j=1;j<a;j+=2){
		for(i=0;i<n;i++){
			if(j==sz[i])
				printf("%d,",j);
		}
    }
	printf("%d",a);
	return 0;
}

