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
	int n,a,b,i,num;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	scanf("%d",&num);
	   if(i==1){
	        a=num;
			b=num;
	  
	  }else if(num>a){
		   b=a;
			a=num;
		}else if((a>num)&&(num>b)){
			b=num;
		}
	
	}
printf("%d\n%d\n",a,b);
	return 0;
}