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
      int N,a;
      int odd(int x);
      int even(int x);
      scanf("%d",&N);
      while(N!=1)
      {
           
           if(N%2==1)
           {
                     a=N;
                     N=odd(N);
                     printf("%d*3+1=%d\n",a,N);                     
           }
           else
           {
                     a=N;
                     N=even(N);
                     printf("%d/2=%d\n",a,N);
           }
      }
      printf("End\n");
  
            }
      
int odd(int x)
{
    int z;
    z=3*x+1;
    return z;
    }
    
int even(int x)
{
    int y;
    y=x/2;
    return y;
    }
