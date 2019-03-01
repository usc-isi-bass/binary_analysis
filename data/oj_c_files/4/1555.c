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
	int p,a,b,i,j,*num;
	num=(int *)malloc(sizeof(int)*10000);
	scanf("%d %d",&a,&b);
	for (i=1;i<=a;i++){
		for (j=1;j<=b;j++)
			scanf("%d",num+(i-1)*b+j);
	}
	 
	for (i=1;i<b;i++){
		p=i;
		for (;;){
			printf("%d\n",*(num+p));
			if (p%b==1 || p>b*(a-1)) break;
			p+=b-1;
		}
	}

	for (i=b;i<=a*b;i+=b){
		p=i;
		for (;;){
			printf("%d\n",*(num+p));
			if (p%b==1 || b==1 || p>b*(a-1)) break;
			p+=b-1;
		}
	}


}