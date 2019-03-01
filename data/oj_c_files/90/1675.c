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

int f(int m,int n)
{    
     int k;
     if(m<n)
     n=m;
      
    if(m == 0)   
        return 1;
    if(n == 1)  
        return 1;
     return f(m,n-1)+f(m-n,n);
 
   
     }
     main()
     {
           int i, t,m,n;
           scanf("%d",&t);
           for(i=1;i<=t;i++)
           {
           scanf("%d %d",&m,&n);
           printf("%d\n",f(m,n));
           }
         
           return 0;
           }
           