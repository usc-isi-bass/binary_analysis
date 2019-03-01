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
  int a,b,t;
  char c;
  a=0;
  b=0;
  c=',';
  while(c==',')
  { 
	  scanf("%d",&t);
	  if(t>b)
	  { if(t>a)
	     {b=a;
	     a=t;
	       } 
	  else if(a==t){}
	  else b=t;
	  }
	  

	  
	  
		c=getchar();  
	
	  
  }
     if(a==b||b==0)
		 printf("No");
	 else printf("%d",b);
	 return 0;
}
