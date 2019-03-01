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

int means(int M,int N)
{
    int k;
if (M==0)
return 1;
else
{
    if(N==1)
    return 1;
             else
             {
                 if(N<=M)
                 { 
                  k=means(M,N-1)+means(M-N,N);
                  return k; 
                 }
                 else
                 {
                      k=means(M,N-1);
                      return k;
                 }        
             }
}    
}
main()
{
      int x,m,n,i,k;
      scanf("%d",&x);
      for(i=0;i<x;i++)
      {
                scanf("%d %d",&m,&n);
                k=means(m,n);
                printf("%d\n",k);                        
      }   
}