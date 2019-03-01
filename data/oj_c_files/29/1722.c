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
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
           int m;
           float sum=0;
           scanf("%d",&m);
           float p=2,q=1,pq;
           for(int i=1;;i++)
           {
                 float a;
                 a=p/q;
                 sum=sum+a;
                 if(i==m)
                 {
                      printf("%.3f\n",sum);
                      break;        
                 }
                 pq=p;
                 p=p+q;
                 q=pq;        
           }        
     }      
}  
