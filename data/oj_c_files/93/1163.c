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
{int a,b,c,d;
scanf("%d",&d);
a=d%3;
b=d%5;
c=d%7;
if (!a)
{ if (!b) 
{    if (!c)
         printf("3 5 7");
      else
		  printf("3 5");}
   else
   { if (!c)
      printf ("3 7");
   else 
	   printf("3");}} 
else
{  if (!b) 
   {  if (!c)
        printf("5 7");
       else 
		   printf("5");}
   else
   {  if (!c) 
        printf("7");
       else
		   printf("n");}}
return 0;
}