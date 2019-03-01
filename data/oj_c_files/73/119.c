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
    int a[5][5];
    int i,j,x;
    for (i=0;i<5;i++)
    for (j=0;j<5;j++)  scanf("%d",&a[i][j]);
    for (i=0;i<5;i++)
    for (j=0;j<5;j++)
    {
        int flag=1;
        for (x=0;x<5;x++)
        {
            if ((a[i][x]>a[i][j]) || (a[x][j]<a[i][j]))
            {
                flag=0; break;
            }
        }
        if (flag)
        {
            printf("%d %d %d",i+1,j+1,a[i][j]);
            return 0;
        }
    }
    printf("not found");
    return 0;
}
