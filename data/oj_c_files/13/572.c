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
    int n,a[20000],i,j,b[100],t=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<t;j++)
        if(a[i]==b[j]) break;
        if(j>=t)
         {
          b[t]=a[i];
          t++;
         }
    }
      for(j=1;j<t-1;j++)
      printf("%d ",b[j]);
      printf("%d",b[t-1]);
}
