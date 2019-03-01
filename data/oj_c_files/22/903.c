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
   int m,i,max,second=0;
   scanf("%d",&m);
   max=m;
   i=0;
   while(i<300)
   {
                      scanf(",%d",&m);
                      if(m>max){ 
                      second=max;
                      max=m;}
                      else if(m<max&&m>second) 
                      second=m;
					  i=i+1;
   }
   if(second==0)
   printf("No");
   else
   printf("%d\n",second);
   return 0;
}
