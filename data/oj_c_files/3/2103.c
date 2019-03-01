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
    int a[MAX];
    int n,k,i,j,d;
    d=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=1;(i+j)<n;j++)
       {
          if((a[i]+a[i+j])==k)
          {
             printf("yes");
             d=1;
             break;
          }
       }
        if((a[i]+a[i+j])==k)
          {
             d=1;
             break;
          }
    }
    if(d==0)
    printf("no");
    return 0;
 }
