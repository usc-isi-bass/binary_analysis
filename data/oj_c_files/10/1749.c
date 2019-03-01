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

int compare(int x,int y)
{
    if(x<=y)
    x=y+1;
    return x;
}
main()
{
      int i,n,r,a,j;
      scanf("%d",&n);
      int *p=(int *)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
      scanf("%d",&p[i]);
      int *q=(int *)malloc(n*sizeof(int));
      //int q[25];
      for(j=n-1;j>=0;j--)
       {
         q[j]=1;
         for(r=n-1;r!=j;r--)
         {
           if(p[j]>=p[r])
           q[j]=compare(q[j],q[r]);
         }
         //q[j]=q[j]+1;
       }
       int max;
       max=q[0]; 
      for(a=1;a<n;a++)
      {
        if(q[a]>max)
        max=q[a];
      }
      printf("%d",max);
      return 0;
}
