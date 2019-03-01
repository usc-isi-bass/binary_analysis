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
double n,y;
int a,b,x=0,k=1;
char sy[501],se[501];
scanf("%lf %s %s",&n,sy,se);
a=strlen(sy);
b=strlen(se);
if(a!=b){
  printf("error");
}
else{
	for(int i=0;i<a;i++){
		if((sy[i]=='A'||sy[i]=='T'||sy[i]=='C'||sy[i]=='G')&&(se[i]=='A'||se[i]=='T'||se[i]=='C'||se[i]=='G')){
		if(sy[i]==se[i]){
		  x+=1;
		}
		}
		else{
		  k=0;
		  break;
		}
	}
	if(k==0){
	printf("error");
	}
	else{
	y=1.0*x/a;
	if(y>=n){
	printf("yes");
	}
	else{
	printf("no");
	}
	}

}
return 0;
}