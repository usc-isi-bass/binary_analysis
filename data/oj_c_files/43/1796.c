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

int zhishu(int n)
{
    int m,d,i;
m=(int)sqrt(n);
for(i=2;i<=m;i++)
{ if(n%i==0)
   break;}
if(i==m+1)
   d=1;
   else
   d=0;
   return(d);
}
main()
{
      int p,m;
      scanf("%d",&m);
      for(p=3;p<=m/2;p++)
      {if((zhishu(p)==1)&&(zhishu(m-p)==1))
      printf("%d %d\n",p,m-p);}
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();
      }
      
      
      
