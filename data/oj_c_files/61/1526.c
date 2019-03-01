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
int n,a,b=1,c=1,y;
scanf("%d",&n);
for(int j=0;j<n;j++){
   scanf("%d",&a);
   for(int i=0;i<a;i++){
	   if(i==0||i==1){
	     y=1;
	   }
	   else{
	     y=b+c;
		 c=b;
		 b=y;

	   }
   }
   printf("%d\n",y);
   c=1;
   b=1;
}



return 0;
}