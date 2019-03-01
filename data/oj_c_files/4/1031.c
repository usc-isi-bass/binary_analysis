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
    int num[101][101];
    int i,j,row,col;
    //freopen("1.txt","r",stdin);
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++)
    for(j=1;j<=col;j++)
    scanf("%d",&num[i][j]);
    printf("%d",num[1][1]);
    for(i=3;i<=col+row;i++)
    {
                           for(j=1;j<i;j++)
                           if(j<=row&&i-j<=col)
                           printf("\n%d",num[j][i-j]);
    }
    //getch();
    return 0;
}
