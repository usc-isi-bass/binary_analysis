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

int reverse(int n)
{
    int i,j,k=0;
    int a[1000];
    for(i=0;;i++)
    {
                 a[i]=n%10;
                 n=n/10;
                 if(n==0) break;
    }
    j=i;
    for(i=0;i<=j;i++)
    {
                 k=k*10+a[i];
    }
    return k;
}
main()
{
      int i,n,k;
      for(i=0;i<6;i++)
      {
                      scanf("%d",&n);
                      k=reverse(n);
                      printf("%d\n",k);
      }
}
                      
                 
    
