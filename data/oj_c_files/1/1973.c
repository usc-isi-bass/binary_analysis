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
  int i,j,num[100],n,m;
  int fj(int ,int );
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   scanf("%d",&num[i]);
  for(i=1;i<=n;i++)
   printf("%d\n",fj(2,num[i]));

  return 0;
}

 int fj(int k,int n)
{
  int c,i,sum=1;
  if(n==2) return(sum);
  else if(n==3)  return(sum);
  else
   {
     c=(int)sqrt(n);
     for(i=k;i<=c;i++)
        if(n%i==0) sum=sum+fj(i,n/i);
     return(sum);
    }
}
     