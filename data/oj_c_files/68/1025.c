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

main()
{   
    int n,m,z,a,b,i;
    scanf("%d",&n);
       for(m=6; m<=n; m=m+2)
       {
               for(a=3; a<=(m/2); a=a+2)
               {
                 for(i=3,z=0; i<=(int)sqrt(a); i=i+2)     //??a  
                      {if(a%i==0) {z=1;break;}}       
                 if(z==0)                             //shi 
                 b=m-a;                               
                 for(i=3,z=0; i<=(int)sqrt(b); i=i+2) //??b 
                      {if(b%i==0) {z=1;break;}}
                 if(z==0)
                 {printf("%d=%d+%d\n",m,a,b);  break;}
               }
       }  
 }   
