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
    int a[10000];
    a[0]=1;a[1]=1;
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
       int k;
       scanf("%d",&k);
       for(int i=2;i<k;i++)
       a[i]=a[i-1]+a[i-2];
       printf("%d\n",a[k-1]);
    }
    getchar();
    getchar();
    getchar();
}
  