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
    int n;
    float j,k,l,m;
    scanf("%d",&n);
    scanf("%f %f",&j,&k);
    l=0.05+k/j;
    m=-0.05+k/j;
    float a[100][2];
    for(int i=0;i<n-1;i++)
    {
        scanf("%f %f",&a[i][0],&a[i][1]);
        if(a[i][1]/a[i][0]>l)
        {
            printf("better\n");
        }
        else
        {
            if(a[i][1]/a[i][0]<m)
            {
                printf("worse\n");
            }
            else
            {
                printf("same\n");
            }
        }
    }
    return 0;
}
