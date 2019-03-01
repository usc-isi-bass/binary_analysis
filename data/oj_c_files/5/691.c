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
	double a;
	int i=0,b,c=0,e=0,f;
	char x[600],y[600];
     scanf("%lf",&a);
	 scanf("%s%s",x,y);
     b=strlen(x);
	 f=strlen(y);
	 if(b==f){
	   for(i=0;i<b;i++){
		   if((x[i]!='A'&&x[i]!='T'&&x[i]!='G'&&x[i]!='C')||(y[i]!='A'&&y[i]!='T'&&y[i]!='G'&&y[i]!='C')){
		      printf("error");
		      e=1;

		      break;
		   }
		   if(x[i]==y[i]){
			  c++;
		   }
	   
	   }
	   if(e==0){
    
	    if(c*1.000/b>=a)
		   printf("yes");
	    else
		   printf("no");
	   }
	 }
	 else{
		 printf("error");
	 }
	 return 0;
}