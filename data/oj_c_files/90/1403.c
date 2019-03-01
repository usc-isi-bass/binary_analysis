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

int f(int m,int n)
{
    if(m<0) return 0;
    else if(n==1) return 1;
    else return f(m,n-1)+f(m-n,n);
}
main()
{
      int t,m,n,i,j,g;
      scanf("%d",&t);
      for(g=0;g<t;g++)
      {
                      scanf("%d %d",&m,&n);
                      printf("%d\n",f(m,n));
      }
}