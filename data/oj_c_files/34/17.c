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
    int m,n,i;
    scanf("%d",&m);
    int jiao(int );
    if(m!=1)
    {
    do{ 
       if(m%2==1)
    {
             n=m*3+1;
             printf("%d*3+1=%d\n",m,n);
    }
    if(m%2==0)
    {
              n=m/2;
              printf("%d/2=%d\n",m,n);
    }
    m=n;
      }
    while(n!=1);
    }
    printf("End");
    getchar();
    getchar();
    getchar();   
}