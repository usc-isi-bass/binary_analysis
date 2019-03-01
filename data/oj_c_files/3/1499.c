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
	int n,i,k,j,e,p;
	int m=0;
	int a[1000];
	int b[499500];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<=n;j++){
		b[m]=a[i]+a[j];
		m++;
		e=m;	
		}
	}
	p=0;
	for(m=0;m<e;m++){
		if(b[m]==k){
			p++;
		}
	}
	if(p==0){
		printf("no");
	}else{
		printf("yes");
	}

	return 0;
}