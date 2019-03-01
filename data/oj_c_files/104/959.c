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
    int i=0,j,a,b;
    scanf("%d%d",&a,&b);
    for(;a>0;a/=2) {
        j=b;
    for(;j>0;j/=2)
    {
        if(a==j) {
            printf("%d",a);
            i=1;break;}
    }
    if(i==1) break;}
    return 0;
}