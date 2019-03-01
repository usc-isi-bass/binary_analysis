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
   int n,a,b,c,d,i;
	scanf("%d\n%d\n%d\n",&n,&a,&b);
	if(a<b){
		c=a;
		b=a;
		a=c;
	}
	for(i=3;i<n;i++){
		scanf("%d\n",&d);
		if(d>=a){
			b=a;
			a=d;
		}
		else if(d>=b){
			b=d;
		}
	}
scanf("%d",&d);
		if(d>=a){
			b=a;
			a=d;
		}
		else if(d>=b){
			b=d;
		}
	printf("%d\n%d\n",a,b);
   return 0;
}