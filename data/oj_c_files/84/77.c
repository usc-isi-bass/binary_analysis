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


int main(int argc, char *argv[])
{
  int i,j,n,t,a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]<a[j])
          {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
          }   
      }               
  }
  printf("%d\n%d\n",a[0],a[1]);

  return 0;
}
