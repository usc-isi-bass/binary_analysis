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
	int i,j,n,sz[10000],a,b=0;
    scanf("%d",&a);
	while(a!=1){
		if(a%2==0){
			b=a;
			a=a/2;
			printf("%d/2=%d\n",b,a);
		}else{
			b=a;
			a=a*3+1;
			printf("%d*3+1=%d\n",b,a);
		}
	}
	printf("End\n");
	return 0;
}