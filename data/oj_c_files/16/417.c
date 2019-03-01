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

long num;
long digit[5];
int main()
{
   int count=0,i;
   long number;
   do
       {
           scanf("%ld",&num);
       }
   while(num<0||num>99999);
   count=0;
   number=num;
   do
       {
           digit[count++]=number%10;
           number=number/10;
       }
   while(number>0);
   for(i=0;i<count;i++)
       printf("%ld",digit[i]);
}