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
    int t,a[200],b[200],m=0,n=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==0&&b[i]==1)
            m=m+1;
        if(a[i]==1&&b[i]==2)
            m=m+1;
        if(a[i]==2&&b[i]==0)
            m=m+1;
        if(a[i]==0&&b[i]==2)
            n=n+1;
        if(a[i]==2&&b[i]==1)
            n=n+1;
        if(a[i]==1&&b[i]==0)
            n=n+1;
    }
    if(m>n)
        printf("A");
    if(m<n)
        printf("B");
    if(m==n)
        printf("Tie");
    return 0;
}