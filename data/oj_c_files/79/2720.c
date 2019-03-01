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
    int n,m,i;
    scanf("%d%d",&n,&m);
    while(n!=0&&m!=0)
    {
    int bh=0;
    if(n==1){printf("1\n");}
    else
    {
        for(i=2;i<=n;i++)
        {
            bh=(bh+m)%i;
        }
        printf("%d\n",bh+1);
    }
    scanf("%d%d",&n,&m);
    }
    return 0;
}