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
	int n,i,j,a[10000]={1,1},sz[10000];
    scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
	    for(j=0;j<sz[i];j++){
			a[j+2]=a[j+1]+a[j];			
        }
		printf("%d\n",a[sz[i]-1]);
	}
	return 0;
}