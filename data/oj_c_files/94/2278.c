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
    int a[500];
    int i,k,e,m,n,d;
    scanf("%d",&n);
	for(i=0;i<=n-1;i=i+1)
	scanf("%d ",&a[i]);
	for( k = 1 ; k <= n ; k++){
	for( i = 0; i <n - k; i++){
			if(a[i] > a[i+1]){
					e = a[i+1];
					a[i+1] = a[i];
					a[i] = e;
			}
	}
}

	for(i=0;i<=n-1;i++){
		if(a[i]%2!=0)
			m=i;}
		for(i=0;i<=n-1;i++){
			if((a[i]%2!=0)&&(i<m))
				printf("%d,",a[i]);}
		printf("%d",a[m]);
		return 0;
}

