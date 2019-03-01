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
    int n,k;
    scanf("%d%d",&n,&k);
    int a[1000];
    int i,j;
    int b,count=0;
    b=n*(n-1);
    for(i=1;i<=n;i++)
    {scanf("%d",&a[i-1]);}
    for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
              if(i!=j){
                  if(a[i-1]+a[j-1]==k)
                      {printf("yes");
                       break;}
                   else{count++;}
              }
          }
         if(a[i-1]+a[j-1]==k){break;}
    }
    if(count==b)
    {printf("no");}
    return 0;
}