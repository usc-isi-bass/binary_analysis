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

int main (){
	int a;
	scanf("%d",&a);
	int b,c,d,e,n;
	n=2;
	while(n<=a){
		if(n==2)
		{
			scanf("%d %d",&d,&e);
			if(d>=e){
				b=d;
				c=e;
			}
			else{b=e;
			c=d;}
		}
		else{
			scanf("%d",&d);
			if(d>=b){
				c=b;
				b=d;
			}
			else if (d>=c){
				c=d;}
		}
	n++;
	}
	printf("%d\n%d\n",b,c);
	return 0;
}
