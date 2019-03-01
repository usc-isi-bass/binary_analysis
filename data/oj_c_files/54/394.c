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
    long n,k,a,i,p,f,g,m;
    scanf("%ld%ld",&n,&k);
    p=1;
    f=(n-1);g=n;
    for(i=1;i<n-1;i++)f*=n-1;
    for(i=1;i<n;i++)g*=n;
    while((n*(p+k))%f)p++;
    m=g*((p+k)/f)-(n-1)*k;
    printf("%ld",m);
}
