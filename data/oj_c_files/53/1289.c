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
	int n,sz[300],i,j,a[300],p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	a[0]=sz[0];
	for(i=1;i<n;i++){
		for(j=0;j<p+1;j++){
			if(sz[i]==a[j]){
				break;
			}else if(sz[i]!=a[j]&&(j==p)){
				p++;
				a[p]=sz[i];
			}
		}
	}
	for(i=0;i<p;i++){
		printf("%d,",a[i]);
	}
	printf("%d",a[p]);
	return 0;
}

	