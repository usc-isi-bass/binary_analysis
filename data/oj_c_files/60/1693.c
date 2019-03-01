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
 int a[2000],i,j,k,n=0;
 a[0]=2;
 for(i=3;i<10000;i++)
 {k=0;
  for(j=0;a[j]*a[j]<=i;j++)
   if(i%a[j]==0) 
    k++;
  if(k==0) 
  {n++;
   a[n]=i;
   }}
 scanf("%d",&k);
 j=0;
 for(i=0;a[i]<=k-2;i++)
  if(a[i+1]==a[i]+2)
  {printf("%d %d\n",a[i],a[i+1]);j++;}
 if(j==0) printf("empty"); 
}
