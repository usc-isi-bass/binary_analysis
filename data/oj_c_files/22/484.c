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
   int n,a,b,m1,m2;
   char q;
   scanf("%d",&a);
   m1=a;m2=-100;
   scanf("%c",&q);
   while (q==',') 
   {
     scanf("%d%c",&a,&q);
 //    printf("%d %d\n",m1,m2);
     if (a>m1) 
        {
         m2=m1;
         m1=a;
        } else 
        if ((a>m2)&&(a<m1)) 
        m2=a;
   }
  if (m2==-100)printf("No");else printf("%d\n",m2);
  // scanf("%d",&a);
   
   return 0;    
    
}
