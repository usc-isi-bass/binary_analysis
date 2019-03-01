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
    int k;
    scanf("%d",&k);
    int a[25];
    int b[25];
    int i,j,max;
    for(i=0;i<k;i++)
    scanf("%d",&a[i]);
    b[k-1]=1;
    for(i=k-2;i>=0;i--)
    {
                       max=0;
                       for(j=i+1;j<=k-1;j++)
                       {
                                          if(a[j]<=a[i])
                                          {
                                                if(max<b[j])
                                                max=b[j];
                                          }
                       }
                       b[i]=max+1;
    }
    max=0;
    for(i=0;i<k;i++)
    {
                  if(max<b[i])
                  max=b[i];
    }
    printf("%d",max);
    getchar();
    getchar();
}           
