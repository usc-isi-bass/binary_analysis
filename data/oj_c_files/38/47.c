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
 int k,n[100],i,j;
 double x[100][100],sum,ave,s;
 scanf("%d",&k);
 for(i=0;i<k;i++)
 {
  scanf("%d",&n[i]);
  for(j=0;j<n[i];j++)
   scanf("%lf",&x[i][j]);               
 }
 for(i=0;i<k;i++)
 {
  sum=0;
  s=0;
  for(j=0;j<n[i];j++)
   sum+=x[i][j];                
  ave=sum/n[i]; 
  for(j=0;j<n[i];j++)
   s+=(x[i][j]-ave)*(x[i][j]-ave);
  s=sqrt(s/n[i]);
  printf("%.5lf\n",s);               
 }
 
 getchar();
 getchar();
 return 0;    
}
