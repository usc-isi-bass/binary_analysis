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
    int toy(int a,int b);
    int n,k,s;
    scanf("%d%d",&n,&k);
    s=toy(n,k);
    printf("%d",s);
    return 0;
}
int toy(int a,int b)
{
    double i,j,c,f,g;
    int d;
    c=0;
    do
    {
        c=c+1;
        g=c;
        for(i=1;i<a;i++)
        g=(g*a+b)/(a-1);
        d=(int)g;
    }while(g!=d);
    d=(int)(g*a+b);
    return(d);

}
