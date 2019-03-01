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
{int z,i;
  i=0;
 scanf("%d",&z);
 if(z%3==0)
 {printf("3");i=i+1;}
  if(z%5==0)
  {if(i==1){printf(" ");}printf("5");i=i+1;}
   if(z%7==0)
   {if(i!=0){printf(" ");}printf("7");i=i+1;}
    if(i==0)
    {printf("n");}
}

     
       
  