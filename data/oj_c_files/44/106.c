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
   int reverse(int num);
   int i,n,p;
   for (i=0;i<6;i++)
   {
       scanf("%d",&n);
       p=reverse(n);
       printf("%d\n",p);
   }
   getchar();
   getchar();
}
   int reverse(int num)
   {
       int d,r=0;//????????? 
       while (num!=0)
       {
       d=num%10;
       r=r*10+d;
       num=num/10;
       }
       return(r);//return????????????????????? 
   }
   
   
   










