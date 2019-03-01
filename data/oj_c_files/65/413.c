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

main()
{
      int n,i,a=0,b=0,x,y;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
         scanf("%d%d",&x,&y);
         if(y-x==0) continue;
         if(x-y==-1||x-y==2) a++;
         else b++;
      }
      if(a>b) printf("A\n");
      if(a<b) printf("B\n");
      if(a==b) printf("Tie\n");
}
