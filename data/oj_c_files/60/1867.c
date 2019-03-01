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
    int n,i,j,p,q,m=0;
    scanf("%d",&n);
    for(i=3;i<=(n-2);i++)
    {
         for(p=0,j=2;j<=(i/2);j++)
         {
         if(i%j==0)
         p++;
         }
         for(q=0,j=2;j<=(i+2)/2;j++)
         {
         if((i+2)%j==0)
         q++;
         }
    if((p==0)&&(q==0))
    printf("%d %d\n",i,i+2);
    m++;
    }
   if(m==0)
    printf("empty");
 return 0;
}
    