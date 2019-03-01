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

int n[300];
int main(void)
{
      int ctr,i=1;
      int max=0,temp;
      scanf("%d",n);
      while((getchar())==',')
      {
      scanf("%d",&n[i]);
      i++;
      }
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]>max)
      max=n[ctr];
      }
      temp=max;
      max=0;
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]==temp)
      n[ctr]=0;
      }
      for(ctr=0;ctr<i;ctr++)
      {
      if(n[ctr]>max)
      max=n[ctr];
      }
      if(max==0)
      printf("No");
      else
      printf("%d",max);
      return 0;
}