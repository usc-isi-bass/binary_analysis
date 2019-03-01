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
{ int m=0,i=0;
  int su(int n);
  scanf("%d",&m);
  for(i=3;i<=m/2;i=i+2)
  {  if(su(i)==1&&su(m-i)==1)
        {printf("%d %d",i,m-i);
         if(i<m/2)
          {printf("\n");
	  
	      }
	    }
	  
	  
	  
	  
   }
     return(0);


}
int su(int n)
{ int i=2,t=1;
   for(i=2;i<n-1;i++)
   {  if(n%i==0)
       {  t=0;
	      break;
	   }
   
   
   } 
   return(t);
	
}