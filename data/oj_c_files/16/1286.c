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
    int n,i,k,out;
    int A[5];
    scanf("%d",&n);
    for(i=1;1<=5;i++)
    {
        if (n<1) break; 
         printf("%d",n%10);
         n=n/10;
     
     }
 return 0;
}