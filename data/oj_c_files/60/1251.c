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
      int prime(int x);
      int n,i,k=0;
      scanf("%d",&n);
      for(i=2;i<=n-2;i++)
      {
                       if(prime(i))
                       {
                                   if(prime(i+2)) 
                                   {
                                                  printf("%d %d\n",i,i+2);
                                                  k=1;
                                   }
                       }
      }
      if(k==0) printf("empty\n");
}

int prime(int x)
{
    int p,j;
    p=sqrt(x);
    for(j=2;j<=p;j++)
    if(x%j==0) break;
    if(j>p) return(1);
    else return(0);
}