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
	int a,b,c,d,e,f;
	int result;
	int m,n;
	for(int i=1;;i++){
     	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}
		else {
    	d=d+12;
	    result=3600*(d-a)+(e-b)*60+(f-c);
	    
		  printf("%d\n",result);
		}
	
	}
	return 0;
 }
