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



int main( )
{
   int x1,x2;
   scanf("%d %d",&x1,&x2);
   int i=1,j=1,m=1,k,l,t,a1[1000],a2[1000];
   if (x1==x2)
     printf("%d\n",x1);
   else if (x1==1||x2==1)
       printf("%d\n",m);
   else{
   a1[0]=x1;
   a2[0]=x2;
   do {
       a1[i]=a1[i-1]/2;
       i++;
      }while(a1[i-1]!=1);
   do {
       a2[j]=a2[j-1]/2;
       j++;
      }while(a2[j-1]!=1);
   for (k=0;k<i;k++)
     for (l=0;l<j;l++)
        if (a1[k]==a2[l])
          {
            printf("%d\n",a1[k]);
            return 0;
          }
   }

}

   
   