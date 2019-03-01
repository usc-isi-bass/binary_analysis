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

int main( ){
	  int n,a,i;
	  scanf("%d",&n);
	  do{
	  if(n==1){
		  printf("End");
		  n=0;
	  }
	  if(n!=0&&n!=1&&n%2==1){
		  a=n*3+1;
		  printf("%d*3+1=%d\n",n,a);
		  n=a;
	  }

  if(n!=0&&n!=1&&n%2==0){
		  a=n/2;
		  printf("%d/2=%d\n",n,a);
		  n=a;
	  }
  i++;
	  }
	  while(n!=0);
 


	return 0;
}

