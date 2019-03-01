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
   int a[100],n,m,i,*p=a;
   scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(p=a+n-m;p<a+n;p++)
    printf("%d ",*p);
    for(p=a;p<a+n-m-1;p++)
    printf("%d ",*p);
    printf("%d",*(a+n-m-1));
    return 0;
}