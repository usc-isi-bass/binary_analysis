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

int f(int n)
{
    if(n==1||n==2)
    return 1;
    else return f(n-1)+f(n-2); 
}
int main()
{
    int i,n,a[10000],result[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        result[i]=f(a[i]);
        printf("%d\n",result[i]);
    }
}