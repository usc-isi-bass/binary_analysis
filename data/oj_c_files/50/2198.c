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
  int w,i,j;
  scanf("%d",&w);
  int num[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
  int tian[12]={13,13,13,13,13,13,13,13,13,13,13,13};
  for(i=0;i<12;i++)
  {
       for(j=0;j<i;j++)
       {
           tian[i]=tian[i]+num[j];            
       }
  }
 int xingqi[12];
 for (i=0;i<12;i++)
 {
     xingqi[i]=(tian[i]%7+w-1)%7;
 }
 for (i=0;i<12;i++)
 {
     if (xingqi[i]==5)
     printf("%d\n",i+1);
 }
 
  return 0;
}