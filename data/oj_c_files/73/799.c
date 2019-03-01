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

// andian
void main()
{
    int a[5][5];
    int j=0,i=0,k=0;
    while(j<5)
    {
        while(i<5)
        {
            scanf("%d",&a[j][i]);
            i++;
        }
        i=0;
        j++;
    }
    for (j=i=0; j<5; j++)
    {
        for(i=0;i<5;i++)
        {
            if(a[j][i]>=a[j][0]&&a[j][i]>=a[j][1]&&a[j][i]>=a[j][2]&&a[j][i]>=a[j][3]&&a[j][i]>=a[j][4])
            {
                if(a[j][i]<=a[0][i]&&a[j][i]<=a[1][i]&&a[j][i]<=a[3][i]&&a[j][i]<=a[4][i]&&a[j][i]<=a[2][i])
                {printf("%d %d %d",j+1,i+1,a[j][i]); k++;}
            }
        }
    }
    if(k==0)printf("not found");
}