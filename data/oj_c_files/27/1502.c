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

 main()
{
int i, n;
float a,b,c;
scanf("%d",&n);
double d[n][3],x,y;
for(i=0;i<n;i++)
  {
     scanf("%f %f %f",&a,&b,&c);
      x=b*b-4*a*c;
    if(x==0)
         {
            d[i][1]=d[i][2]=-b/(2*a);
            d[i][3]=x;
          }
    else if(x>0)
        {     
          y=sqrt(x);
          d[i][1]=(-b+y)/(2*a); 
          d[i][2]=(-b-y)/(2*a);
          d[i][3]=x;
         }
    else
         {
           y=sqrt(-x);
           d[i][1]=-b/(2*a);
           d[i][2]=y/(2*a); 
           d[i][3]=x;
          }
   }
 for(i=0;i<n;i++)
   {
   if(d[i][1]==-0)
   d[i][1]=0;
   if(d[i][2]==-0)
   d[i][2]=0;
     if(d[i][3]<0)
       printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",d[i][1],d[i][2],d[i][1],d[i][2]);
     else if(d[i][3]>0)
          printf("x1=%.5f;x2=%.5f\n",d[i][1],d[i][2]);
     else
          printf("x1=x2=%.5f\n",d[i][1]);
    }
}
