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
   int n;
   int tmp;
   scanf("%d",&n);
   while(1){
	   tmp=n%10;
	   printf("%d",tmp);
	   if(!(n=n/10))break;
   }
   printf("\n");
   return 0;
}