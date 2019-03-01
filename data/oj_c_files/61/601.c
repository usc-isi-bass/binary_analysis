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
	int n,x,i=1,j,a,b,c;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&x);
		j=1;
		a=1;
		b=1;
		while(j<=x-1){
			c=a+b;
			a=b;
			b=c;
			j++;
		}
		printf("%d\n",a);
		i=i+1;
	}
    return 0;
}