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
    int n,i;
    double a=1.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       a=a*2;
    }
    printf("%.0lf",a);
    scanf("%d",&n);
    return 0;
}
