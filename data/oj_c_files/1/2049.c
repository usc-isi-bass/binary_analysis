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

int f(int n,int i)
{
    int sum=0;
    for(i;i<=(int)sqrt(n);i++){
        if(n%i==0) {
            sum+=f(n/i,i);
        }
    }
    return sum+1;
}
main()
{
      int i0,n0;
      scanf("%d",&n0);
      for(i0=0;i0<n0;i0++){
          int n;
          scanf("%d",&n);
          printf("%d\n",f(n,2));
      }
}
