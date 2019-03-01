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

int main ()
{
    int i,n;
    scanf("%d",&n);
    int q[100];
    for(i=0;i<n;i=i+1){
        scanf("%d",&(q[i]));
    }
    for(i=n-1;i>=1;i=i-1){
    printf("%d ",q[i]);
    }
    printf("%d",q[0]);
    return 0;
}
