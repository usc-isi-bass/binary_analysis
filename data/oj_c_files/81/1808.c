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

int juzhen(int hang)
{
    if (hang<5&&hang>=0)
    {
        return 1;
    }
    else return 0;

}

int main()
{
    int temp,a[5][5],i,j,n,m;

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&n,&m);
    if (juzhen(n)&&juzhen(m))
    {

        for (j=0;j<5;j++)
        {
            temp=a[n][j];
            a[n][j]=a[m][j];
            a[m][j]=temp;
        }
    }
    else{printf("error\n"); return 0;}

    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("%d\n",a[i][4]);
    }


    return 0;
}
