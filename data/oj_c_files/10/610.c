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

int compare(const void *a,const void *b)
{
    return (*(int*)b-*(int*)a);
}
int main()
{
    int k,i,j,m=0;
    scanf("%d",&k);
    int a[30]={0};
    for(i=0;i<k;i++)
    {
    scanf("%d",&a[i]);
    }
    int b[30]={1};
    int t;
    int c[30];
    for(i=1;i<k;i++)
    {
                 t=0;
              for(j=0;j<30;j++)
              {
                               c[j]=0;
              }
              for(j=i-1;j>=0;j--)
              {
                               if(a[j]>=a[i])
                               {
                                       c[t]=b[j];
                                       t++;
                               }
              }
              qsort(c,t,sizeof(int),compare);
              b[i]=c[0]+1;
    }
    for(i=0;i<k;i++)
    {
                    if(m<b[i])
                    m=b[i];
    }
    printf("%d\n",m);
    getchar();
    getchar();
    getchar();
}