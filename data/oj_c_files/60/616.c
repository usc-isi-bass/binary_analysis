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

int sushu(int x)
{
    int i;
    for (i=2;i<x;i++)
    {
        if (x%i==0) break;
    }
    if (i==x) return 1;
    else return 0;
}
int main ()
{
    int n,a=0;
    scanf("%d",&n);
    for (int j=4;j<=n;j++)
    {
        if((sushu(j-2)==1)&&(sushu(j)==1))
        {
            printf("%d %d\n",j-2,j);
            a++;
        }
    }
    if (a==0) printf("empty");
    return 0;
}
