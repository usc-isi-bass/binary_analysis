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

  
 
int Fibonacci(int x);
int main(){	
int n,s,k,a[25];	
scanf("%d",&n);	
for(k=0;k<n;k++){		
scanf("%d",&a[k]);
	}	
for(k=0;k<n;k++){	    
s=Fibonacci(a[k]);        
printf("%d\n",s);	
}	
return 0;
}
int Fibonacci(int x){	
int result,i,a=1,b=1,c;	
if(x<=2){		
result=1;	
}else{		
for(i=3;i<=x;i++){			
result=a+b;			
c=b;			
b=result;			
a=c;		
}	
}	
return result;} 
 
 
