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
 int n, i,k,j;
 double  b[10000],c,d[10000],m;
 double sum[100];
    scanf("%d",&n);
 for(i=0;i<n;i++)
 {m=0.0;
 c=0.0;
  scanf("%d",&k);
  for(j=0;j<k;j++)
  {
    scanf("%lf",&b[j]);
  }
  for(j=0;j<k;j++)
  {
 
       
        c=c+b[j];
  }
  for(j=0;j<k;j++)
  {
     d[j]=b[j]-c/k;
     
     m =m+d[j]*d[j];  
  }
  
    sum[i]=sqrt(m/k);
  
  
 }
 for(i=0;i<n;i++)
 {
  
  printf("%.5lf\n",sum[i]);
 }
 return 0;
}
 
