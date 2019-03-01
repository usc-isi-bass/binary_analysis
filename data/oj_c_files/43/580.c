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
      int m,i,j,k,a[10000]={0};
    scanf("%d",&m);
    a[2]=1;
    for(i=3;i<=m;i=i+2)
    {
      k=sqrt(i);
      for(j=2;j<=k;j++)
      if(i%j==0)break;
      if(j>=k+1)
      a[i]=1;
     }
    for(i=3;i<=m-3;i++)
    {
      if(a[i]!=0)
      {
      for(j=i;j<=m-3;j++)
      if((j+i==m)&&(a[j]!=0))printf("%d %d\n",i,j);
       }
    }
    return 0;
}  