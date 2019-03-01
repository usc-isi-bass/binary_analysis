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
    float a[1000];
    float b[1000];
    int n,m,j,i;
    float sum;
    a[1]=1;a[2]=2;
    scanf("%d",&m);
    for(j=1;j<=m;j++)
    {sum=0;
    scanf("%d",&n);
    
    for(i=3;i<=n+1;i++)
    a[i]=a[i-1]+a[i-2];
    for(i=1;i<=n;i++)
    {
                sum=sum+a[i+1]/a[i];     }
               printf("%.3f\n",sum) ;
               }
              getchar();getchar(); }
