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
   struct point{
    double x,y;}
    tope[80];
    int i,j,n;
    scanf("%d",&n);
    double s,a=0.0;
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf",&tope[i].x,&tope[i].y);
    }
   for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
      s=0.0;
     s=(tope[i].x-tope[j].x)*(tope[i].x-tope[j].x)+(tope[i].y-tope[j].y)*(tope[i].y-tope[j].y);
     if(s>a||s==a) 
     {
         a=s;
      }
    }
}
    printf("%.4f\n",sqrt(a));
    return 0;
}