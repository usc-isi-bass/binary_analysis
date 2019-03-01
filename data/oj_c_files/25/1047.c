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


void everydouble(int a[])
{
     int i;
     for (i=0;i<=99;i++)
         a[i]*=2;
}

void moveahead(int a[])
{
     int i;
     for (i=0;i<=99;i++)
     {
         if (a[i]>=10)
         {a[i]-=10;a[i+1]++;}
     }
}

void print(int a[])
{
     int flag=0,i;
     for (i=0;i<=99;i++)
     {
         if (a[i]!=0)
            flag=i;
     }
     for (i=flag;i>=0;i--)
     printf("%d",a[i]);
}

int main(int argc, char *argv[])
{
  int n,i,j;
  scanf("%d",&n);
  int a[100];
  a[0]=1;
  for (i=1;i<=99;i++)
      a[i]=0;
  for (i=0;i<=n-1;i++)
  {
      everydouble(a);
      moveahead(a);
  }
  print(a);
  return 0;
}
