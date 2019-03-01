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

 int n,k,i; 
int f(int x) {
 int t; 
	if(x==n) 		 { 		
	t=n*i+k; 	 i++;	 	return t; 		 
} 
	 for(;;) { 	
t=f(x+1) ;
 if(t%(n-1)==0) 	 { 		
 t=t/(n-1)*n+k; 	 return t;
 } 	
}
}
 int main() {
 cin>>n>>k;
 	 cout<<f(1)<<endl;
 return 0; 
}