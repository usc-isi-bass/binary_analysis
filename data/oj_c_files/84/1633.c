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
int a,b=0,c=0,d,e,i=1;
scanf("%d",&a);
while(i<=a){
	scanf("%d",&d);
	if(b<=d){
        e=b;
		b=d;
	}
	if(b>d){
		if(c<d){
		c=d;
		}
	
	}
	i++;
}
if(e>c){
	c=e;
}
printf("%d\n%d\n",b,c);
return 0;
}