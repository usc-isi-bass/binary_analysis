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
 int n,i,k,m[10];
 float r=0,g=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&m[i]);
  r+=m[i];
 }
 for(i=0;i<n;i++)
 {
  scanf("%d",&k);
  if(k<60) g+=0*m[i];
  else if(k<=63) g+=1.0*m[i];
  else if(k<=67) g+=1.5*m[i];
  else if(k<=71) g+=2.0*m[i];
  else if(k<=74) g+=2.3*m[i];
  else if(k<=77) g+=2.7*m[i];
  else if(k<=81) g+=3.0*m[i];
  else if(k<=84) g+=3.3*m[i];
  else if(k<=89) g+=3.7*m[i];
  else g+=4.0*m[i];
 }
 printf("%.2f\n",g/r);
}
