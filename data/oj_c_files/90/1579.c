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
   int c;
   if(n==1||m==1||m==0)  c=1;
   else if (m<0)  c=0;
   else      c=f(m,n-1)+f(m-n,n);
   return c;
}
main()
{
    int m,n,c,i,k;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    { 
        scanf("%d %d",&m,&n);    
        k=f(m,n);
        printf("%d\n",k);
    } 
  
}

