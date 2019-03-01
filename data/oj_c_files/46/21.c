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
    int a[101][101],i,j;
    int b[101][101]={1};
    int col,row;
    int x=0,y=0;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;++i)
        for(j=0;j<col;++j)
            scanf("%d",a[i]+j);
    printf("%d\n",a[0][0]);
    while(1)
    {
        if(b[x][++y]!=0)
            break;
        while((b[x][y]==0) && (y<col))
        {
            printf("%d\n",a[x][y]);
            b[x][y]=1;
            ++y;
        }
        --y;
        if(b[++x][y]!=0)
            break;
        while((b[x][y]==0) && (x<row))
        {
            printf("%d\n",a[x][y]);
            b[x][y]=1;
            ++x;
        }
        --x;
        if(b[x][--y]!=0)
            break;
        while((b[x][y]==0) && (y>=0))
        {
            printf("%d\n",a[x][y]);
            b[x][y]=1;
            --y;
        }
        ++y;
        if(b[--x][y]!=0)
            break;
        while((b[x][y]==0) && (x>=0))
        {
            printf("%d\n",a[x][y]);
            b[x][y]=1;
            --x;
        }
        ++x;
    }
    return 0;
}
    
