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
    int i,j;
    int sum=0;
    int p;
    int min,max;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        p=0;
        max=a[i][0];
        for(j=1;j<5;j++)
        {
            if(a[i][j]>max)
            {
max=a[i][j];                
p=j;
            }
        }
        //printf("*%d*%d*\n",i,p);
        min=a[0][p];
        for(j=0;j<5;j++)
        {
            if(a[j][p]<min)
            {
               min=a[j][p];
            }
        }
        if(min==a[i][p])
        {
            printf("%d %d %d",i+1,p+1,a[i][p]);
            sum++;
        }

    }
    if(sum==0)
    {
        printf("not found");
    }
 return 0;
}