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

int f(int x)
{
    int s=0,y,z;
    y=x;
    while(x!=0)
    {
    s=10*s+x%10;
    x=x/10;
    }
    if(s==y)
    return 1;
    else
    return 0;
}
int g(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
    if(x%i==0)
    break;
    }
    if(i==x/2+1)
    return 1;
    else return 0;
}
main()
{
      int i,m,n,t=0;
      scanf("%d %d",&m,&n);
      for(i=m;i<=n;i++)
      {
      if(f(i)==1 && g(i)==1)
      {
      if(t==0)
      {
      printf("%d",i);
      t++;
      }
      else
      printf(",%d",i);
      }
      }
      if(t==0)
      printf("no");
      getchar();
      getchar();
      }