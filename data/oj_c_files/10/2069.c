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

//?????????????(?????)
int result[40];//result[i]???a[i]????????????????
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
void f(int a[],int n)
{
    /*??a[i]??????result?????result[j]???result[i]=1+result[j]*/
    int i,j,maxmium;
    result[1]=1;
    for(i=2;i<=n;i++)
    {
                     maxmium=0;
                     for(j=1;j<i;j++)
                     {
                                     if(a[j]>=a[i]) maxmium=max(result[j],maxmium);
                     }
                     result[i]=1+maxmium;
    }
}
                     
                     
                     
main()
{
      int n,i,outcome=0;
      scanf("%d",&n);
      int a[40];
      for(i=1;i<=n;i++)
      {
                       scanf("%d",&a[i]);
      }
      f(a,n);
      for(i=1;i<=n;i++)
      outcome=max(outcome,result[i]);
      printf("%d\n",outcome);
}
       