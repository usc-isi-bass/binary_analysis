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

int reverse(int num)
{
    int a,b=0,i;
    if(num==0)
    b=0;
    for(i=0;num!=0;i++)
    {
               a=num%10;
               num=num/10;
               b=a+b*10;
    }
    return b;
}
main()
{
                   int n,i,j,k;
                   for(k=0;k<6;k++)
                   {
                                   scanf("%d",&n);
                                   printf("%d\n",reverse(n));
                   }
      getchar();
      getchar();
      getchar();
}
