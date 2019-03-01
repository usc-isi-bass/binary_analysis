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
int n,k,i,j,a[1000],b[1000];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	b[i]=a[i];
}
for(j=0;j<n;j++){
	for(i=0;i<n;i++){
		if(i==j){
			continue;
		}else if(k==a[j]+b[i]){
				printf("yes\n");
				break;
			}
		}
		if(k==a[j]+b[i]){
			break;
		}
	}
	if(k!=a[j]+b[i]){
		printf("no\n");
	}
     return 0;

}