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

int fun(int n);
main()
{
   int n;
   scanf("%d",&n);
   int num;
   for(int i=0;i<n;i++)
   {
      scanf("%d",&num);
      printf("%d\n",fun(num));
   }  
   getchar();
   getchar();
}
int fun(int n)
{
    if(n==1||n==2)  return 1;
    else 
    {
       int sum=0;
       sum=fun(n-1)+fun(n-2);
       return sum;  
    } 
}
