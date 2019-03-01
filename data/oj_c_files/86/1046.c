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
int n,m,a,b,i,j;

scanf("%d",&n);
for(i=0;i<n;i++)
{
   scanf("%d",&m);
   b=0;
   for(j=0;j<m;j++)
   {
      scanf("%d",&a);
       if(a+b<60)
       if(a+b+3<60)
        b+=3;
       else
        b=60-a;
   }
   printf("%d\n",60-b);
}
return 0; 
}