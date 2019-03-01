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

int f(int m)
{
    int d=0;
    while(m!=0)
    {
    d=d*10+m%10;
    m=m/10;
    }
    return d;
}
int g(int n)
{
    int i,m=0;
    for(i=2;i<n;i++)
    {
      if(n%i==0)
      break;
    }
    if(i==n)
    m=1;
    return m;
}
main()
{
      int a,b,i,count=0;
      scanf("%d %d",&a,&b);
      for(i=a;i<=b;i++)
      {
       if(f(i)==i&&g(i)==1)
       {count++;
         if(count==1)
         printf("%d",i);
         else
         printf(",%d",i);
       }
      }
      if(count==0)
      printf("no");
      getchar();
      getchar();
      return 0;
      }
       
      
      
      
