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
	int n,a[1000],b[1000],p,q,i,k,j;
	scanf("%d",&n);
	'\n';
	for(i=0;i<n;i++){
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++){
		p=1;
		q=1;
		for(k=2;k<a[i];k++){
			j=p+q;
			p=q;
			q=j;
		}
		b[i]=q;
	}
	for(i=0;i<n-1;i++){
		printf("%d\n",b[i]);
	}
	printf("%d",b[n-1]);
	return 0;
}
