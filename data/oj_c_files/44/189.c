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

int reverse(int num) 
{
    int retval = 0;
    while(num) 
    { 
    retval = retval*10 + num%10; 
    num=num/10; 
    } 
    return retval; 
} 
int main()
{
     int i,a[6],b[6];
     for(i=0;i<6;i++)
     {
         scanf("%d",&a[i]);
         b[i]=reverse(a[i]);
         printf("%d\n",b[i]);
     }
}

   
