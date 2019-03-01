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

void main()
{
   int n,f1=0,f2=0,f3=0;
   scanf("%d",&n);
   if(n%3==0) 
   {printf("3"); f1=1;}
   if(n%5==0&&f1==0)
   {printf("5");f2=1;}
   if(n%5==0&&f1==1) {printf(" 5");f2=1;}
   if(n%7==0&&f1+f2>=1) {printf(" 7");f3=1;}
   if(n%7==0&&f1+f2==0) {printf("7");f3=1;}
   if(f1+f2+f3==0) printf("n");
}