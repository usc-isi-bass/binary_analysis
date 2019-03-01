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
	int k,n,i,b,c,d;
	int a[LEN];
	c=0;
	scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(d=0;d<n;d++){
		b=k-a[d];
			for(i=0;i<n;i++){
				if((b==a[i])&&(i!=d)){
				c=1;
				break;}}

			
	;	}
	if(c==0){printf("no");}
	else if(c==1){printf("yes");}
	return 0;
}