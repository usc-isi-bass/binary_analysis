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
  int n,i,j;
  float all[1000],some[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%f %f",&all[i],&some[i]);
  }
  for(j=1;j<n;j++)
  {
    if(((some[j]/all[j])-(some[0]/all[0]))>0.05)
    {
      printf("better\n");
    }
    else
   {
    if(((some[0]/all[0])-(some[j]/all[j]))>0.05)
    {
      printf("worse\n");
    }
    else
    {
      printf("same\n");
    }
   }
  }
  return 0;
} 
