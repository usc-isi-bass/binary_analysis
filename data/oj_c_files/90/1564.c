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

int allfilled(int m,int n);
int notallfilled(int m,int n);
main()
{
      int t,i,m,n,c,d,sum;
      scanf("%d\n",&t);
      for(i=0;i<t;i++)
      {
      scanf("%d %d",&m,&n);       
      if(m>=n)    
      {
          c=notallfilled(m,n);
          d=allfilled(m,n);
          sum=c+d;
      }
      else
          sum=notallfilled(m,n);
      printf("%d\n",sum);
      }
          
}

int allfilled(int m,int n)
{
     int z;
     if(m==n)
        return 1;
     else if(n==1)
        return 1;
     else 
     {
     if(m-n>=n)
        z=allfilled(m-n,n)+notallfilled(m-n,n);
     else
        z=notallfilled(m-n,n);
     return z;
     }
}

int notallfilled(int m,int n)
{
     int z;
     if(n==1)
        return 0;         
     else
     {
     if(m<n-1)
        z=notallfilled(m,n-1);
     else
        z=allfilled(m,n-1)+notallfilled(m,n-1);
     return z;
     }
}
