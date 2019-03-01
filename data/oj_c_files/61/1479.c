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

int main()
{
	int n,a,x,y,i,e,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		if(a==1){
			printf("1\n");
		}else if(a==2){
			printf("1\n");
		}else{
			x=1,y=1;
			for(k=3;k<=a;k++){
				e=y;
				y=x+y;
				x=e;
			}
			printf("%d\n",y);
		}
	}
	return 0;
}