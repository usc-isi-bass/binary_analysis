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

int isPrime(int a)
{
    int i;
    for(i=2;i<a;i++)
    if(a%i==0)return 0;
    return 1;
}
int main()
{
   int n;
   scanf("%d",&n);
   int i,sum=0;
   for(i=3;i+2<=n;i++)
   if(isPrime(i)&&isPrime(i+2))
   {printf("%d %d\n",i,i+2);sum++;}
   if(sum==0)printf("empty");
   return 0;
}
    
