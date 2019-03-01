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

void main()
{
  long a,m,n,i,p,q,b,c;
  scanf("%ld",&a);
  i=6;
  m=3;
  
  while (i<=a)  
	   
       { 
	    while (m<=i/2)
               { q=3;
                 while(q<=sqrt(m))
                      {
                       c=m%q;
                       if(c!=0){q=q+1;}
                       else {m=m+2;q=3;}
                      }
               
    
    
                p=2;
                n=i-m;
                while (p<=sqrt(n))
                      {
                       b=n%p;
                       if (b==0) break;
                       else p=p+1;
                      }
         if (b!=0) {printf("%ld=%ld+%ld\n",i,m,n);break;}
         else m=m+2;
        }
      i=i+2;
	  m=3;
      }
}
