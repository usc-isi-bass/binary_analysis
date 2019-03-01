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
	int a[1000];
	int b,i,n,k,j,s;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		s=a[i];
		for(j=i+1;j<n;j++){
			s=a[i]+a[j];
			if(s==k){
				b=1;
			}
			else
				continue;
		}
	}
	if(b==1)
		printf("yes");
        else
		printf("no");
	return 0;
}
