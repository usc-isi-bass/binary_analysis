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
	int n,a[300],b[300],i,j,x=1,y=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				break;
			}
			if(j==(i-1)){
				x++;
			}
		}

	}

	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				break;
			}
			if((j==(i-1))&&(y<(x-1))){
				printf("%d,",a[i]);
				y++;
			}
			else if((j==(i-1))&&(y==(x-1))){
				printf("%d",a[i]);
			}
		}
		if(i==0){
			printf("%d,",a[0]);
		}
	}

	return 0;
}