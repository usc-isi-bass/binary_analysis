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



int sushu(int i)
{
    int j,k;
    k=1;
    for(j=2;j<i;j++)
    {
                    if (i%j==0) 
                    {
                          k=0;
                          break;
                    }
    }
    return k;
}

int main()
{
    int n,i,out;
    scanf("%d",&n);
    out=0;
    for (i=4;i<=n;i++)
    {
        if (sushu(i)&&sushu(i-2)) {printf("%d %d\n",i-2,i); out=1;}
    }
    if (out==0)
    {
               printf("empty");
    }
    return 0;
}
