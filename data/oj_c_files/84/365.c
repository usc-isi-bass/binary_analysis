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
    int a[100];
    int i,j,n,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                     printf("\n");
                     scanf("%d",&a[i]);
    }
    for(j=0;j<2;j++)
    {
                      for(i=0;i<n-1-j;i++)
                      {
                                          if(a[i]>a[i+1])
                                          {
                                                         t=a[i];
                                                         a[i]=a[i+1];
                                                         a[i+1]=t;
                                          }
                      }
    }
                        printf("%d\n%d",a[n-1],a[n-2]);
    getchar();getchar();
}
