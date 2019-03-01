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
    int m, i;
    scanf("%d", &m);
    for(i=1; i<=m; i++)
    {
         int n, j, num[100], k;
         scanf("%d", &n);
         if(n==0) 
               printf("60\n");
         else
         { 
               for(j=1; j<=n; j++)
               {
                    scanf("%d", &num[j]);
               }
               for(j=1;j<=n;j++){
               if((num[j] + 3 * (j - 1))>= 60)
                         { k = 60-3*(j-1);
                          break;}
               else if((num[j]+3*j )>= 60)
                          {k = num[j];
                          break;}
                    else 
                          k = 60-3*j;
                          
              }
              printf("%d\n", k);
         }           
    }
    return 0;
}

