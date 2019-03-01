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
   int di,number,k,j,n;
   n=1;
   di=10;
   scanf("%d",&number);
   do
   {
	   j=number-di;
   if(j>0)
   {
   n=n+1;
   di=di*10;
   }
   }
   while(j>0);
   j=0;
   di=10;
   do
   {
	   k=((number%di)-(number%(di/10)))/(di/10);
	   printf("%d",k);
       di=di*10;
	   j=j+1;       
   }
while(j<n);
}


