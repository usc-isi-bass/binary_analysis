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
    int n,m,k,i,j=0,z;
    scanf("%d",&n);
   for(i=3;i<=n-2;i=i+2)
   {
                      z=1;
   for(k=3;k*k<=i;k++)
   if(i%k==0) z=0;
   if(z==0);
   else 
   {  z=1;
       for(k=3;k*k<=i+2;k++)
   if((i+2)%k==0) z=0;;
   if(z==0);
   else {printf("%d %d\n",i,i+2);j++;}
        }
   }
   if(j==0)
   printf("empty");
  }
