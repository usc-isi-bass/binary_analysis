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
 float x[100][3],a,b,c,d;
 int i,n;
 double x1,x2;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   scanf("%f%f%f",&x[i][1],&x[i][2],&x[i][3]);                 
 }    
 for(i=1;i<=n;i++)
 {
   a=x[i][1];
   b=x[i][2];
   c=x[i][3];
   d=b*b-4*a*c;
   if(d>0 && c==0)  
     printf("x1=%.5f;x2=%.5f\n",c,(-b-sqrt(d))/(2*a)); 
   if(d>0 && c!=0)  
     printf("x1=%.5f;x2=%.5f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a)); 
   if(d==0)
     printf("x1=x2=%.5f\n",(-b+sqrt(d))/(2*a)); 
   if(d<0 && b==0)
     printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b,sqrt(-d)/(2*a),b,sqrt(-d)/(2*a));
     if(d<0 && b!=0)
     printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(a*2),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));                     
 }  
}
