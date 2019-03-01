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
    int n,i,j,x[hang][lie],s=0,x1,y1,x2,y2;
    scanf("%d",&n);
    n=n;
    
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                        scanf("%d",&x[i][j]);
        }        
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                        if(x[i][j]==0&&x[i-1][j]==255&&x[i][j-1]==255&&x[i+1][j]==0&&x[i][j+1]==0)
                        {
                        x1=i;
                        y1=j;
                        }
                        else if (x[i][j]==0&&x[i-1][j]==0&&x[i][j-1]==0&&x[i+1][j]==255&&x[i][j+1]==255)
                        {
                        x2=i;
                        y2=j;
                        }
        }        
    }
    s=(x2-x1-1)*(y2-y1-1);
    printf("%d",s);
    return 0;
}