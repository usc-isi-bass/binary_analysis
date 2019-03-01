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
{int i,j,k,m,n,p=0,q;
 scanf("%d",&n);
 q=n*(n-1)/2; 
 double t,jl[q];
 struct{double x;double y;}dian[n];
 for(i=0;i<n;i++)
    scanf("%lf %lf",&dian[i].x,&dian[i].y);
 for(i=0;i<(n-1);i++)
   {for(j=i+1;j<n;j++)
     {
     jl[p]=sqrt((dian[i].x-dian[j].x)*(dian[i].x-dian[j].x)+(dian[i].y-dian[j].y)*(dian[i].y-dian[j].y));  
     p++;
    } }
 for(i=0;i<(q-1);i++)
  { for(j=i+1;j<q;j++)
     if(jl[j]>jl[i]) {t=jl[j];jl[j]=jl[i];jl[i]=t;}
  }
  printf("%.4lf",jl[0]);

}
