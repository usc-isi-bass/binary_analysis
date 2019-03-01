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
    int shuzu[5][5];
    int row;
    for(row=0;row<5;row++)
    {
        for(int col=0;col<5;col++)
        {
            scanf("%d",&shuzu[row][col]);
        }
    }
    int n,m;
    scanf("%d %d",&n,&m);
    if(m>4||n>4)
    {
        printf("error");
        return 0;
    }
    else if(m<5&&n<5)
    {
        int a[5];
        for(int col=0;col<5;col++)
        {
            a[col]=shuzu[n][col];
            shuzu[n][col]=shuzu[m][col];
            shuzu[m][col]=a[col];
        }
    }
    for(row=0;row<5;row++)
    {
        for(int col=0;col<4;col++)
        {
            printf("%d ",shuzu[row][col]);
        }
        printf("%d",shuzu[row][4]);
        printf("\n");
    }
    return 0;
}