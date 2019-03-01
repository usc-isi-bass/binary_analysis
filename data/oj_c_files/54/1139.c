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


int fun(int temp, int n, int k)
{
    int output = temp * n / (n - 1) + k;
    return output;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    
    int last;
    int temp;
    int i;
    int count = 0;
    for(last = k;; last++)
    {
             count = 1;
             temp = last * n + k;
             
             
             for(i = 2; i <= n; i++)
             {
                   temp = fun(temp, n, k);
                   if(temp % n == k)
                           count++;
             }
             
             if(count == n)
             {
                      printf("%d", temp);
                      break;
             }
    }            
    
    
    return 0;
}

