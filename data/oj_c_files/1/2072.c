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

int num;
main()
{
      void fenjie(int x,int qi);
      int n,k,a;
      scanf("%d",&n);
      for(k=1;k<=n;k++)
      {
          num=0;
          scanf("%d",&a);
          fenjie(a,2);
          printf("%d\n",num);
      }
}
void fenjie(int x,int qi)
{
      if(x==1) num++;
      else
      {
         for(int i=qi;i<=x;i++)
         {
              if(x%i==0) fenjie(x/i,i);
         }
      }
}