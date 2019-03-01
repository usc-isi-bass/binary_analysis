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
 int A,B,C;//A,B,C??????????? 
 int a,b,c;//a,b,c??????????? 
 int i;//i????? 
 char rice[4];//???????? 
 for(A=1;A<=3;A++)
  for(B=1;B<=3;B++)
   for(C=1;C<=3;C++)
   {
     a=((B>A)+(C==A));
     b=((A>B)+(A>C));
     c=((C>B)+(B>A));
     if(((A>B&&a<b)||(A==B&&a==b)||(A<B&&a>b))+((A>C&&a<c)||(A==C&&a==c)||(A<C&&a>c))+((B<C&&b>c)||(B>C&&b<c)||(B==C&&b==c))==3)//???????????? 
       {
          rice[A]='A';
          rice[B]='B'; 
          rice[C]='C';                                           
       } 
     } 
   for (i=1;i<=3;i++) cout<<rice[i];
   
   return 0;             
} 