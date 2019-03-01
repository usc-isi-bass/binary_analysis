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




int f(int m,int n)
{
if(m==0||m==1) return 1;
if(n==0||n==1) return 1;
if(m<n) return f(m,m);
else return f(m-n,n)+f(m,n-1);
}
int main()
{
    int t=0;
    int m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n));        
    } 

    return 0;
}