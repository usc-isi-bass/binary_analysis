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
	int n,i,max,sum;
	int a[99];
	scanf("%d%d",&n,&a[0]);
	max=a[0];
	sum=a[0];
	for(i=1;i<=n-1;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			sum=max;
			max=a[i];
		}
		if(max>a[i]&&(a[i]>sum)){
			sum=a[i];
		}
	}
	if(i<=99){
		printf("%d\n%d",max,sum);
	}
	return 0;
}