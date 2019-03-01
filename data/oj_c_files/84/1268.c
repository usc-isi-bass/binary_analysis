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
   int n,i,a,b,c,x,y;
      scanf("%d\n",&n);
	  i=1;
      scanf("%d\n%d\n",&a,&b);
	  if(a>b){
		  x=a,y=b;
      }else{
		  x=b,y=a;
	  }
	  while(i<=n-2){
	  scanf("%d",&c);
	  if(c>x){
          y=x,x=c;
	  }
	  else if(c<x&&c>y){
		  x=x,y=c;
	  }
	  else if(c<y){
		  x=x,y=y;
	  }i++;
	  }

	  printf ("%d\n%d",x,y);
	
		
   return 0;
}
