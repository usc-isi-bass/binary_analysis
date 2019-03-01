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
    int row,col,a[100][100];
    int i,j;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;++i)
        for(j=0;j<col;++j)
            scanf("%d",a[i]+j);
    for(i=0;i<col;++i)
        for(j=0;(i-j>=0) && (j<row);++j)
            printf("%d\n",a[j][i-j]);
    for(i=1;i<row;++i)
        for(j=0;(j<col) && (i+j<row);++j)
            printf("%d\n",a[i+j][col-j-1]);
    return 0;
}
