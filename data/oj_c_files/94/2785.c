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
	int p,q,m,i,n,j,k,a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	k=0;
	for(j=0;j<n;j++){
		if(a[j]%2!=0){
		b[k]=a[j];k++;
		}
	}
	int e;
for(p = 0 ; p <= (k-1) ; p++){
	for(q = 0; q < (k-1) - p; q++){
			if(b[q] > b[q+1]){
					e = b[q+1];
					b[q+1] = b[q];
					b[q] = e;
			}
	}
}
	for(m=0;m<(k-1);m++){
	printf("%d,",b[m]);
	}
	printf("%d",b[(k-1)]);
return 0;
}