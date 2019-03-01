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
    int i,x,y,s,g=0;
	double rate,t;
	char a[510],b[510];
	s=0;

	scanf("%lf%s%s",&rate,a,b);
	x=strlen(a);
	y=strlen(b);
    if(x!=y){
	     printf("error");
	}
	else{
        for(i=0;i<x;i++){
			if(((a[i]!='A')&&(a[i]!='C')&&(a[i]!='G')&&(a[i]!='T'))||((b[i]!='A')&&(b[i]!='C')&&(b[i]!='G')&&(b[i]!='T'))){
			   
			   g=1;
			}
			else if(a[i]==b[i]){
			   s++;
			}
		}
    t=rate*x;
	if(g==0){
		if(s>t){
	      printf("yes");
	   }
	   else{
	      printf("no");
	   }
	}
	else{printf("error");}
	   
	}

return 0;
}
