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

int fx(int n)
{
    int t=0;
    do
    {
        t=t*10+n%10;
        n/=10;
    }
    while(n!=0);
    return t;
}
int ab(int n)
{
    if(n<0)
    return -ab(-n);
    return fx(n);
}
int main()
{
    int i,t;
    scanf("%d",&t);
    printf("%d",ab(t));
    for(i=1;i<=5;i++)
    {
                     scanf("%d",&t);
    printf("\n%d",ab(t));
    }
   // getch();
    return 0;
}
