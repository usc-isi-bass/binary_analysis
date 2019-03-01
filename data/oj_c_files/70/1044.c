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

double len(double a,double b,double c,double d)
{ double le1,le2,op;
   le1=(a>c?a:c)-(a<c?a:c);
   le2=(b>d?b:d)-(b<d?b:d);
   op=le1*le1+le2*le2;
   op=sqrt(op);
   return op;      
}

main()
{ int n,i;
  scanf("%d",&n);
  double x[n],y[n];
  for(i=0;i<n;i++)
  {
    scanf("%lf %lf",&x[i],&y[i]);
    }
  int j,k;
  
  double LEN,max;  
 
  for(j=0;j<n;j++)
  for(k=j;k<n;k++)
  {
    LEN=len(x[j],y[j],x[k],y[k]);              
    
    if(max<LEN)          
    max=LEN;   
     }
  
  printf("%.4lf",max);
  getchar(); 
   getchar(); 
    getchar(); 
     getchar(); 
      getchar(); 
 getchar();     
}
