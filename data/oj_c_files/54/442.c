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
   int n,j,k,m,s=1,a=0;
   scanf("%d%d",&n,&k);
   j=1;
   for(;;)
   {  
    if(a==n) {printf("%d",m); break;}
    else if((j*n)%(n-1)!=0)  {j=1+s++; a=0;}
     else {
           m=j*n/(n-1)+k;
           j=m;
           a++;
           }
   }
   printf("\n");



}
   
