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
    int i,n,t; 
    char c[10000]; 
    gets(c); 
    n=strlen(c); 
    t=0; 
    for(i=0;i<=n;i++) 
	{ 
      if(c[i]!=' '&&c[i]!='\0') 
	  { 
         t=t+1; 
	  } 
      if(c[i]==' ') 
	  { 
         if(c[i-1]!=' ')  
		 {
			 printf("%d,",t); 
             t=0; 
		 }
		 
	  } 
      if(c[i]=='\0') 
	  { 
          printf("%d",t); 
	      t=0;
	  } 
	} 
}
