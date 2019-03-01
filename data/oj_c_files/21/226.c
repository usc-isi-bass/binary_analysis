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

void main(){
  int n,a[300],i,min,max;
  float ave,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   sum=sum+a[i];
  }
  ave=sum/n;
  max=a[0];
  min=a[0];
    for(i=0;i<n;i++)
  {
   if(a[i]>max)
   max=a[i];
  }
      for(i=0;i<n;i++)
  {
   if(a[i]<min)
   min=a[i];
  }

  if((max+min)>2*ave)
  printf("%d",max);
  else if((max+min)<2*ave)
  printf("%d",min);
  else
  printf("%d,%d",min,max);


     }
