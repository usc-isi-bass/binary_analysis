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
   int n=0,i;
   char in[150][150]={0};
   while (scanf("%s",in[n])!=EOF)n++;
   printf("%s",in[n-1]);
   for(i=n-2;i>=0;i--)
   {
     printf(" %s",in[i]);
   }
   putchar('\n');
}