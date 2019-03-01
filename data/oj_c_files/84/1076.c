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
	int n;
	scanf("%d",&n);
	int a,i,b,c,d;
	scanf("%d\n",&a);
	scanf("%d\n",&c);
	for(i=1;i<=n-2;i++){
					  scanf("%d\n",&b);
					  if(b>a&&a>c){
					  		  c=a;
					  		  a=b;			  		  
							  }
					  if(b>c&&c>a){
					  			   a=b;
					  			   c=c;
								   }
				      if(a>b&&b>c){
					  			   a=a;
					  			   c=b;
								   }
				      if(a>c&&c>b){
					  			   a=a;
					  			   c=c;
								   }
				      if(c>a&&a>b){
				                   d=c;
				                   c=a;
				                   a=d;
								   }
				      if(c>b&&b>a){
					  			   a=c;
					  			   c=b;
								   }		  
					  }
    printf("%d\n%d",a,c);    
    return 0;
}