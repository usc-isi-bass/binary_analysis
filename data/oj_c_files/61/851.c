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

int f(int x)
{
    if(x==1||x==2)
      return 1;
    else
     return (f(x-1)+f(x-2));
}
int main()
{
    int n,i,k,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&k);
      m=f(k);
      printf("%d\n",m);
    }
    getchar();
    getchar();
}
