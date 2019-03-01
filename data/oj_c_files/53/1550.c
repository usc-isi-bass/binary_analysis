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
    int m[500],n,i=0,j,q;
    for(scanf("%d",&n);i<n;i++)scanf("%d",&m[i]);
    printf("%d",m[0]);
    for(i=1;i<n;i++){
        q=1;
        for(j=0;j<i;j++)
            if(m[i]==m[j]){m[j]=0;break;}
        if(m[j])printf(",%d",m[i]);
    }
    return 0;
}