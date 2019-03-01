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

 int main ()
{
  int i,j;
  int n;
  scanf("%d",&n);
  for(j=0;j<n;j++)
  {
  float a,b;
  a=0;
  int m;
  scanf("%d",&m);
  float szj[m];
  for(i=0;i<m;i++)
  { 
    scanf("%f",&szj[i]);
    a+=szj[i];
  }
  b=(float)a/m;
  double c,d,e;
  c=0;
  for(i=0;i<m;i++)
  { 
    c+=(double)(szj[i]-b)*(szj[i]-b);
  }
    d=(double)c/m;
    e=sqrt(d);
    printf("%.5lf\n",e);
 }
return 0;
}
    