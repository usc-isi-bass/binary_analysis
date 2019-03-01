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
        int point[M][N];
        int i,j;
        int n;
        int a,b,c,d;
        int sum=0;
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&point[i][j]);
                }
        }
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(point[i][j]==0&&point[i+1][j]==0&&point[i+1][j+1]==255&&point[i][j+1]==0)
                        {
                                a=i;
                                b=j;
                        }
                        if(point[i][j]==0&&point[i+1][j]==255&&point[i+1][j+1]==255&&point[i][j+1]==255)
                        {
                                c=i;
                                d=j;
                        }
                        sum=(c-a-1)*(d-b-1);
                }
        }
        printf("%d\n",sum);
        return 0;
}
         