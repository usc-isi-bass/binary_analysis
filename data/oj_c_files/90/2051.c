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
  int n;
  int i,j;
  int a,b;
  int x;

  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d %d",&a,&b);
      x=apple(a,b);
      printf("%d\n",x);
  }
  return 0;
}

int apple(int a,int b)
{
    int plan;
    int x;
    if(a==0||b==1)
    {
       plan=1;
    }
    else
    {
        if(a>=b)
        {
            x=apple(a-b,b);
        }
        else
        {
            x=0;
        }
        plan=apple(a,b-1)+x;
    }
    return plan;
}
