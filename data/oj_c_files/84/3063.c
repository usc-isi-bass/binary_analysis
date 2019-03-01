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

int max(int a,int b){
	
	if(a>=b)
			return a;
		else 
			return b;
	}
int min(int a,int b){
	if(a>=b){
		return b;
	}
	else return a;
}

void main (){

	int i,c;
	int n;
	int a=0;
	int b=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&c);
		b=max(min(a,c),min(a,b));
		a=max(a,c);
	}
	printf("%d\n",a);
	printf("%d\n",b);

}
