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
	int a=0,b=0,i=0,j=0,p=0,q=0,m=0,n=0,x1=0,y=0;
	scanf("%d",&x1);
	y=0;
	for (i=1;i<=x1;i++){
		for (j=1;j<=x1;j++){
			scanf("%d",&a);
			if ((a==0)&&(y==0)){
				p=i;
				q=j;
				y=1;
			}
			else if (a==0){
				m=i;
				n=j;
			}
		}
	}
	b=(m-p-1)*(n-q-1);
	printf("%d",b);
	return 0;
}

