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
    int a[10000],b[10000],p,q,m,n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("\n%d",&a[i]);
                     }
    for(i=0;i<n;i++){
                     printf("%d\n",ans(a[i],2));
                     }
    return 0;
}

int ans(int sum,int min)
{
    int w,x,u=1;
    for(w=min;w<sum/2;w++){
                         x=sum%w;
                         if(x==0){
                                  if(w<=sum/w)
                                  u+=ans(sum/w,w);
                                  }
                         }
    return u;
}