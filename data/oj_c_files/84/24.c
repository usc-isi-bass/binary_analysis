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

void main()
{
    int n,i,a,b,c,m,t,r,k;
    scanf("%d\n",&n);
    scanf("%d\n%d\n",&a,&b);
    if(a<b)
      { t=a;a=b;b=t;}
    for(i=1;i<=n-2;i++)
     {
       scanf("%d\n",&c);
       if(c>=a)
        { r=a,a=c,c=r;
          k=c;c=b;b=k;}
      else if(c>=b)
        { t=b;b=c;c=t;}
     }
    printf("%d\n%d\n",a,b);
}
