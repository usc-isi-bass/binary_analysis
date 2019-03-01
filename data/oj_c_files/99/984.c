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
	int n,i,a=0,b=0,c=0,d=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k<19){
		a++;	
		}else if(k<36){
			b++;
		}else if(k<61){
			c++;
		}else{
			d++;
		}
	}
	printf("1-18: %.2lf",100.0*a/n);
	printf("%%\n");
	printf("19-35: %.2lf",100.0*b/n);
		printf("%%\n");
	printf("36-60: %.2lf",100.0*c/n);
		printf("%%\n");
	printf("60??: %.2lf",100.0*d/n);
		printf("%%");
	return 0;
}