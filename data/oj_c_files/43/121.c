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
    int m,i,j;
    scanf("%d",&m);
    for(i=3;i<=m/2;i++)
    {
             for(j=1;j++;j<=i)
             {
                              if(i%j==0)
                              break;
             }         
             if(j==i)
             {
                     for(j=2;j++;j<=m-i)
                     {
                              if((m-i)%j==0)
                              break;
                     }
                     if(j==m-i)
                     printf("%d %d\n",i,m-i);
             }        
    }
    getchar();
    getchar();
}
