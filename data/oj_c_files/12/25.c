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


int main(int argc, char* argv[])
{   
   int i,j,k[16],a,p,b,c,q;
   for(i=1;i<1000;i++)
   {
	   p=0;q=0;
	   for(j=0;j<16;j++)
	   {
		   scanf("%d",&a);
         if(a==-1) break;
         else if(a!=-1)
		 { 
		   if(a==0) break;
		   else	 
		   {
			   k[j]=a;
		       p++;
		   }
		 }
	   }
	  if(a==-1) break;
	  for(b=0;b<p;b++)
	  {
		   for(c=0;c<p;c++){ 
	           if(k[b]-2*k[c]==0)
			   q++;
		  }
	  }	   
	  printf("%d\n",q);
   }
      return 0;
}
