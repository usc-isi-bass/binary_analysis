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
    int n,i,j,t=0;
    int a[20000];
    scanf("%d",&n);
    scanf("%d",&a[1]);
    printf("%d",a[1]);
    for(i=2;i<=n;i++)
    {
    scanf("%d",&a[i]);
    for(j=1;j<i;j++)
    {
    t=0;
    if(a[i]==a[j]){
    t=1;
    break;
    }
    }
    if(t==0)
    printf(" %d",a[i]);
    }
      return 0;
}
