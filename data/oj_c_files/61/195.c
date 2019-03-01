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

int fei(int n)
{
    if(n==1||n==2)
    return 1;
    else 
    return fei(n-1)+fei(n-2);
}
int main()
{ 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
            int p=0;
            scanf("%d",&p);
            int q=fei(p);
            printf("%d\n",q);
    }
}