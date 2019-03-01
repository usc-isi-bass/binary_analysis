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

int num(int n)
{
    if(n==1) return 1;
    if(n==2) return 1;
    if(n>=3) return num(n-1)+num(n-2);
}

int main()
{
    int n,s,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
        printf("%d\n",num(s));
    }
    getchar();
    getchar();
}