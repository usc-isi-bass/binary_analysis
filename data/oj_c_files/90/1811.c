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


int act(int n,int m)
{
    if (m==1||m==0) {
        return 1;
    }
    else
    if (n==1&&m>0) {
        return 1;
    }
    else
    if (m<0) {
        return 0;
    }
    else
        return (act(n, m-n)+act(n-1, m));
}

int main()
{
    int times,i,m,n;
    scanf("%d",&times);
    
    for (i=0; i<times; i++) {
        scanf("%d %d",&m,&n);
        printf("%d\n",act(n, m));
    }
    return 0;
}