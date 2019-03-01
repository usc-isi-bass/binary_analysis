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
{  int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
  switch (a){
   case 4:
   printf("Mon.");
   break;
   case 2000:
   printf("Tue.");
   break;
   case 1921:
   printf("Fri.");
   break;
   default:
   printf("Sat.");
   break;
  }
   return 0;
}