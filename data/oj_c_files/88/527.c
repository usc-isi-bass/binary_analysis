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
   char a[31];
   cin.getline(a,31,'\n');
   int b=strlen(a);
   char c[31];
   char *p=a;
   char *q=c;
   for(;p<a+b;q++,p++)
    {
       if(*p-'0'>=0&&*p-'0'<=9)
         *q=*p;
       else
         *q='\n';
     }
   for(q=c;q<c+b;q++)
     cout<<*q;
      
     
     
   
   
   
   
 
 return 0;
 }
