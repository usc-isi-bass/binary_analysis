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
	int x,i,e,k,m;
	for(k=1;k<7;k++){
	   scanf("%d",&x);
	   if(x==0){printf("0\n");}
	   if(x<0){
		   printf("-");
		   x=-x;
	   }if(x!=0){
		     for(i=1;;i++){
		       if(x%10==0){
			    x/=10;
			   }else{break;}
			 }for(i=1;;i++){
		       e=x%10;
		       printf("%d",e);
		       x=x/10;
		       if(x==0){break;}
			 }printf("\n");
	   }
	}return 0;
}