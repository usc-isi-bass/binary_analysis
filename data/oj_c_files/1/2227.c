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

int p(int x)
{
     int i;
     for(i=2;i<=sqrt(x);i++) if(x%i==0) return(0);
     return(1);
}
int f(int n,int m)
{
     int t,i;
     if(n<m) return(0);
     else if(p(n)==1) return(1);
     else if(m==1)
     {
          t=1;
          for(i=m+1;i<n;i++)
          {
               if(n%i==0) t=t+f(n/i,i);
          }
     }
     else if(m!=1)
     {
          t=1;
          for(i=m;i<n;i++)
          {
               if(n%i==0) t=t+f(n/i,i);
          }
     }
     return(t);
}    
main ()
{
     int x,y,z,j;
     scanf("%d",&y);
     for(j=0;j<y;j++)
     {
           scanf("%d",&x);
           printf("%d\n",f(x,1));
     }
    
}