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
	int x,y;
	scanf("%d %d",&x,&y);
	while(x>=1&&y>=1){
		 if (x==y) 
		 {printf("%d",x);
          break;
		 }
		 if(x<y) {
			 while(x<y){
             y=y/2;
			 }
		 }
		 else {
			 while(x>y){
             x=x/2;
			 }
		 }
	}
    return 0;
}