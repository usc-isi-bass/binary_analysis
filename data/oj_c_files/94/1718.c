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
	int N,a[500],i,b[500],j=0,m,e,n;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==1){
			e=a[i];
			b[j]=e;
			j++;
		}
	}
	n=j;
	for(int k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(b[i]>b[i+1]){
				m=b[i];
			    b[i]=b[i+1];
			    b[i + 1]=m;
			}
		}
	}
	for(i=0;i<n;i++)
		if(b[i]<b[n-1])
		printf("%d,",b[i]);
		else printf("%d",b[i]);
	return 0;
}