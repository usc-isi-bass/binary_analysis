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

int F(int n,int a)
{
  if(n==1)   return 1;
  if(a==1)   return 0;
  if(n%a==0) return F(n/a,a)+F(n,a-1);
             return F(n,a-1);
}
main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        printf("%d\n",F(a,a));
    }
}