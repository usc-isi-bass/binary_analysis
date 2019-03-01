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

void main()
{
int n,k,x[100],i,cas,m;
scanf("%d%d",&n,&k);
x[0]=0;
for(m=1;x[0]==0;m++)
 {
 x[n]=(n-1)*m;
 cas=0;
 for(i=n;i>=1&&cas==0;i--)
  {
  if(x[i]%(n-1)==0)
   x[i-1]=x[i]*n/(n-1)+k;
  else 
   cas=1;
  }
 }
printf("%d",x[0]);
}