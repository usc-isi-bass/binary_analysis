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
int x[10],y[10],a,b,i,j,k,t,m,s=0;
scanf("%d %d",&a,&b);
for(i=1,x[0]=a;x[i-1]!=1;i++)
   {
    x[i]=x[i-1]/2;
    }
k=i;
for(i=1,y[0]=b;y[i-1]!=1;i++)
   {
    y[i]=y[i-1]/2;
    }
t=i;
for(i=0;i<k;i++)
   {
    for(j=0;j<t;j++)
        {
         if(x[i]==y[j])
             {
              printf("%d",x[i]);
              s=1;
              break;
              }
         }
   if(s==1) break;
   }
return 0;
}