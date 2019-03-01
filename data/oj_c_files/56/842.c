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
   int i=0,j;
   char a[5];
   while(1)
   {
	   scanf("%c",&a[i]);
	   if (a[i]=='\n') break;
	   i=i+1;
   }
   for(j=(i-1);j>=0;j--)
	   printf("%c",a[j]);

}