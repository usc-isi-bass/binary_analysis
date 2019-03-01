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
    int n;
    scanf("%d", &n);
    int i=1;
    int k;
    int sum=0;
    int x[10];
    if(n==0)
    printf("0");
    else
    {
    while(n!=0)
    {
               
               x[i]=n%10;
               n=n/10;
               i++;
    }
    i=i-1;

    for(k=1;k<=i;k++)
    {
                     printf("%d", x[k]);
    }
    }

    return 0;
}
