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
    int a[3],b[3];
    do{scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
    int n,m;
    n=3600*a[0]+60*a[1]+a[2];
    m=3600*(b[0]+12)+60*b[1]+b[2];
    if((b[2]+b[1]+b[0]+a[0]+a[1]+a[2])!=0) printf("%d\n",m-n);}while((b[2]+b[1]+b[0]+a[0]+a[1]+a[2])!=0);
    return 0;


}