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
    int k,m,n,i,a[10000],sum[10000],y,j;
    scanf("%d",&k);
    for(j=1;j<=k;j++)
    {scanf("%d%d",&m,&n);
    sum[j-1]=0;
     for(i=1;i<=10000;i++)               
     {
     scanf("%d",&a[i-1]);
     y=i<=n||i%n==1||i%n==0||i>m*n-n;
     sum[j-1]+=y*a[i-1];
     if(i>=m*n) break;
                  }                
                   }
    for(i=1;i<=k;i++)
    printf("%d\n",sum[i-1]);
    

  return 0;
}
