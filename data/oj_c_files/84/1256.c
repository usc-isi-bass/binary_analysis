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
	int n,i,a,b,c;
	i=1;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&a);
		if(i==1){
			b=a;
			a=0;
		}else{
			if(a>b){
				c=b;
				b=a;
			}else{
				b=b;
				if(a>=c){
					c=a;
				}else{
					c=c;
				}
			}
		}
		i++;
	}
	printf("%d\n%d\n",b,c);
	return 0;
}
