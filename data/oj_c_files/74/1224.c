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

int judge(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
                    if(n%i==0)
                    break;
    }
    if(i==n)
    return 1;
    else
    return 0;
}

int scan(int n)
{
    int a,b,i,j,k,r,s=1,t=1,count=0;
    for(i=0;;i++)
    {
                 t=10*t;
                 if(n/t==0)
                 break;
    }
    for(j=0;j<=i/2;j++)
    {
                       t=t/10;s=s*10;r=s/10;
                       a=(n/t)%10;
                       b=(n%s)/r;
                       if(a==b)
                       count++;
    }
    if(count==i/2+1)
    return 1;
    else
    return 0;
}   

main()
{
      int a,b,i,p=0,q=0,count=0;
      scanf("%d %d",&a,&b);
      for(i=a;i<=b;i++)
      {
                  p=judge(i);
                  q=scan(i);
                  if(p==1&&q==1&&count!=0)
                  {
                                          count++;
                                          printf(",%d",i);
                  }
                  if(p==1&&q==1&&count==0)
                  {
                                          printf("%d",i);
                                          count++;
                  }
      }
      if(count!=0)
      printf("\n");
      else 
      printf("no\n");
      return 0;
}