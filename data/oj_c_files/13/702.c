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
    int n,i,j,a[100000],b[100000]={0},k;
    scanf("%d",&n);
    j=1;
    for(i=1;i<=n;i++)
    {
      scanf("%d",&k);
      if(b[k]==0)
      {
        a[j]=k;
        j++;
        b[k]=1;
      }
      }
      for(i=1;i<j;i++)
      {
        if(i==1)printf("%d",a[i]);
        else printf(" %d",a[i]);
        }
}