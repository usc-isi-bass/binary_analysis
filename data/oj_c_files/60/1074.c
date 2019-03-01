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


int prime(int i)
{
    int j;
    int output = 0;
    int count = 0;
    
    if(i == 1 || i == 2)
         output = 0;
    else
    {
    for(j = 1; j <= i; j++)
          if((i / j) * j == i)
               count++;
    
    if(count == 2)
             output = 1;
    }
    
    
    return output;
}
             
     

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int i;
    for(i = 3; i <= n - 2; i = i + 2)
    {
          if(prime(i) == 1 && prime(i + 2) == 1)
          {
                      printf("%d %d\n", i, i + 2);
                      count++;
          }
                      
    }
    if(count == 0) printf("empty");
 
    return 0;
}

