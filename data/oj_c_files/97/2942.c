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
   int n,m=0;                       //????n?????m
   cin>>n;
   for (n;n>=100;n=n-100)           //?????????????100
   {
        m=m+1;                      //100?????
   } 
   cout<<m<<endl;                   //??100???????
   m=0;                             //???m??????????
   for (n;n>=50;n=n-50)
   {
        m=m+1;
   } 
   cout<<m<<endl;
   m=0;
      for (n;n>=20;n=n-20)
   {
        m=m+1;
   } 
   cout<<m<<endl;
   m=0;
   for (n;n>=10;n=n-10)
   {
        m=m+1;
   } 
   cout<<m<<endl;
   m=0;
   for (n;n>=5;n=n-5)
   {
        m=m+1;
   } 
   cout<<m<<endl;
   m=0;
   for (n;n>=1;n=n-1)
   {
        m=m+1;
   } 
   cout<<m<<endl;
   return 0;
}