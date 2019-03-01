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

int BT(int x,int a[40000])
{
    int b=0,c=0;
    while(b<40000)
    {
                 if(a[b]==x)
                 {
                            c=1;
                            break;
                 }
                 else
                 b++;
    }
    return c;
}
main()
{
      int n,a[40000],i,b[40000],c;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<10001;i++)
      b[i]=-1;
      for(i=0,c=0;i<n;i++)
      if(BT(a[i],b)==0)
      {
                       if(c==0)
                       printf("%d",a[i]);
                       else
                       printf(" %d",a[i]);
                       b[c]=a[i];
                       c++;
      } 
      getchar();
      getchar();
}