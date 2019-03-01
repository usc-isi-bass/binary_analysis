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
    int sun(int x);
    int n, m, i;
    scanf("%d", &n);
    for(m=6;m<=n;m=m+2)
    {
       for(i=3;i<=m/2;i=i+2)
       {
           if(sun(i)==1&&sun(m-i)==1)
           break; }                    
           printf("%d=%d+%d\n", m, i, m-i);          
     }
     return 0;
}
  
   int sun(int x)
   {
       int j,A,t;
       t=sqrt(x);
       for(j=2;j<=t;j++)
       {if(x%j==0) break;}
        if(j>t) A=1;
        else A=2;
        return (A);
    }  
