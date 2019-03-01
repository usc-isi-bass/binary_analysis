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

int main()
{
    int j,k,l,n,i;
    scanf("%d",&n);
    j=2;
    k=2;
    if(n>=5)
    {
       for(l=3;l<=n;l++)
       {
          for(i=2;i<l;i++)
          {
             if(l%i==0)
               break;
          }
          if(i==l)
          {
             j=k;
             k=l;
             if(k-j==2)
                printf("%d %d\n",j,k);
          }
       }
    }
    else
    printf("empty");           
    return 0;
}       
