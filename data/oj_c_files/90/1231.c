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

int pl(int m,int n)
{
   int c;
   if(m==0)
   c=1;
   else if(m<0)
   c=0;
   else if(n==1)
   c=1;

   else 
   c=pl(m-n,n)+pl(m,n-1);

   return c;
}
main()
{
    int m,n,i,t,c;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf ("%d %d",&m,&n);
        c=pl(m,n);
        printf("%d\n",c);
    }
 }

