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
	int n,xue,shu,i,h[500],e;
	scanf("%d",&n);
	h[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d %d",&xue,&shu);
		if(xue>=90&&xue<=140&&shu>=60&&shu<=90){
			h[i]=h[i-1]+1;
		}else{
			h[i]=0;
		}
	}
	e=h[0];
	for(i=1;i<=n;i++){
		if(e<h[i]){
			e=h[i];
		}
	}
	printf("%d",e);
	return 0;
}