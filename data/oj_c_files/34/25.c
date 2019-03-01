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
   int i;
   char str[5]={'E','n','d'};
   scanf("%d",&i);
   while(i!=1)
   {
	   if(i%2==0)
	   {
		   printf("%d/2=%d\n",i,i/2);
		   i=i/2;
	   }
	   else
	   {
		   printf("%d*3+1=%d\n",i,i*3+1);
		   i=i*3+1;
	   }
   }
   printf("%s",str);
}
