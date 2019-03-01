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
    unsigned int n,i,k,m,N;
    scanf("%d%d",&n,&k);
    N=n;
    if(n==2)
      {
          m=8-k;
          printf("%d",m);
      }
    else
      {
          n=pow(n,n);
          m=n-(N-1)*k;
          printf("%d",m);
      }
      return 0;
}