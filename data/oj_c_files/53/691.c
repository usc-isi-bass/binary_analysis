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
 int n,num[300],temp,flag=0,*p,*q;
 scanf("%d",&n);
 scanf("%d",&num[0]);
 for(p=num+1;p<(num+n);p++)
 {
  scanf("%d",&temp);
  for(q=num;q<p;q++)
  {
   if(temp==*q)
   {
    flag = 1;
    break;
   }
  }
  if(flag==1)
  {
   p--;
   n--;
  }
  else *p=temp;
  flag = 0;
 }
 printf("%d",*num);
 for(p=num+1;p<(num+n);p++)
     printf(",%d",*p);
} 
