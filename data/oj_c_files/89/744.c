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
    int a[10000],b[10000],i,j,c,d,u,sum,n;
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    while(1)
    {
           scanf("%d%d",&c,&d);
           if(c==0&&d==0)
           {
                         break;
           }
           a[d]++;
           b[c]++;
    }
    sum=0;
    for(i=0;i<n;i++)
    {
                    if(a[i]==n-1&&b[i]==0)
                    {
                                          printf("%d",i);
                                          sum++;
                    }
    }
    if(sum==0)
    printf("NOT FOUND");
    scanf("%d",&u);
    return 0;
}
    
