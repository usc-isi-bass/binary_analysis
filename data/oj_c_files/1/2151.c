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

int fenjie(int a,int b)
{
    int c=1,i;
    for(i=b;i<=(int)sqrt(a);i++)
    {
                                if(a%i==0)
                                c+=fenjie(a/i,i);
                                }
    return c;
}
main()
{
      int n,i,a,c;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
                       scanf("%d",&a);
                       c=fenjie(a,2);
                       printf("%d\n",c);
                       }
      }