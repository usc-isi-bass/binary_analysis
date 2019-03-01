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

void main(){
  
	
	char a[501];
	
	int i,j,k,z,n; 
   
	 gets(a);


	 n=strlen(a);
  
   for(j=1;j<n;j++)	 

   for(i=0;i<n-j;i++)
   { 
	   for(k=0;k<=j/2;k++)
	   {
		   if(a[i+k]!=a[i+j-k]) break;
	   }
	  
	   if(k==j/2+1) 
	   {
		   for(z=i;z<=i+j;z++)
		   { printf("%c",a[z]);
		    
		   } 
	   printf("\n");
	   }
   }
}

	  