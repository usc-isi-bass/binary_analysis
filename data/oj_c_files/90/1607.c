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

int method(int m,int n);
main()
{
      int t,M,N;
      scanf("%d",&t);
      for(int i=0;i<t;i++)
      {
              scanf("%d %d",&M,&N);
              printf("%d\n",method(M,N));
      }      
    
} 
int method(int m,int n)
{
    if(n==1)
       return 1;
    else if(m<0)
            return 0;
         else if(m==0)
                 return 1;
              else
                 return method(m,n-1)+method(m-n,n);
}