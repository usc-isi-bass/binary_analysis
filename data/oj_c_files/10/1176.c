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
    int i,j,n,a[26],b[26],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          scanf("%d",&a[i]);
    }
    b[0]=1;
    k=1;
    for(j=1;j<n;j++)
    {
                    b[j]=1;
                    for(i=0;i<j;i++)
                    {
                                    if(a[i]>=a[j])
                                    {
                                                  if(b[i]+1>b[j])  b[j]=b[i]+1;
                                    }
                    }
                    if(b[j]>k)  k=b[j];
    }
    printf("%d\n",k);
    return 0;
}