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
	int i,t,k=0;
	double rate;
	char a[501],b[501];
	scanf("%lf",&rate);
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)!=strlen(b)){
	  printf("error");
	}
	else{
	  t=strlen(a);
	  for(i=0;i<t;i++){
		  if(a[i]!='T'&&a[i]!='G'&&a[i]!='C'&&a[i]!='A'){
		  printf("error");
		  break;
		  }
		  if(b[i]!='T'&&b[i]!='G'&&b[i]!='C'&&b[i]!='A'){
		  printf("error");
		  break;
		  }
		  if(a[i]==b[i]){
		  k++;
		  }
		  if(i==t-1){
	          if(1.0*k/t>=rate){
	          printf("yes");
			  }
	          else{
	          printf("no");
			  }
		  }
	  }
	}
return 0;
}
