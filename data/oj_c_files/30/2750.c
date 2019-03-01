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

void main(){
int a,b, c, d;
c=0;
scanf("%d",&a);
for(b=1;b<=a;b++){
	if(b%7!=0)
		if(b%10!=7)
		  if(b/10!=7){
			c=c+b*b;}
}
printf("%d",c);
}