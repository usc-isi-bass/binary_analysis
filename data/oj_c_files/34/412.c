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
    int n,i,a;
	scanf("%d",&n);
	
	for(i=1;;i++){
        if(n==1){
		   printf("End\n");
           break;
		}
	  if(n%2==0){
		a=n/2;
		printf("%d/2=%d\n",n,a);
	    if(a==1){
		  printf("End\n");
		  break;
		}
	    else{
		  n=a;
		}
	  }
	   if(n%2!=0){
		  a=n*3+1;
		  printf("%d*3+1=%d\n",n,a);
		if(a==1){
		  printf("End\n");
		  break;
		}
		else{
		n=a;
		}
	  }
	}
	return 0;
}