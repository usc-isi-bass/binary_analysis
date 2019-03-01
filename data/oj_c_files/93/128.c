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
    int n,k=0;
    scanf("%d",&n);
    if(n%3==0)
    {
         printf("3");
         k++;
    }
    if(n%5==0)
    {
         if(k==0)
         {
                 printf("5");
                 k++;
         }
         else
         {printf(" 5");k++;}
    }
    if(n%7==0)
    {
         if(k==0)
         {
                 printf("7");
                 k++;
         }
         else
         {printf(" 7");k++;}
    }
    if(k==0)
    printf("n");
    return 0;
}
