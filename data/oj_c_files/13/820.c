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
    int n,k=2,i;
    scanf("%d",&n);
    int a[n+1];
    scanf("%d",&a[1]);
    printf("%d",a[1]);
    while(k<=n)
    {
     scanf("%d",&a[k]);
     i=1;
     while(i<=k-1)
     {
       if(a[i]==a[k]) break;
       else if(i==k-1) printf(" %d",a[k]);
       i=i+1;
       }
       k=k+1;
       }
      return 0;
}