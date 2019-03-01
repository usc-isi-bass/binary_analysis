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

int f(int m,int n){
	int i;
	int k=0;
	for(i=2;i<=n;i++)
		k=((m%i)+k)%i;
	return k;
}

int main(void){
	int a,b,i,re;
	for(i=0;;i++){
		scanf("%d%d",&b,&a);
		if(a==0)
			break;
		re=f(a,b)+1;
		printf("%d\n",re);
	}
	return 0;

}