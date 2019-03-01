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
int x,y,m;
scanf("%d %d",&x,&y);
m=y;
while(x>=1){
	while(y>=1){
	   if(y==x){
		   printf("%d",y); return 0;
	   }
	   y=y/2;
	   //printf("%d %d\n",x,y);
	}
	x=x/2;
	y=m;
}
return 0;
}