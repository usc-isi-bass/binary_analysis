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

//struct
main()
{
    int k;
    scanf("%d",&k);
    double l,max;

    double d[100][3];
    for(int i=0;i<k;i++)
        scanf("%lf %lf",&d[i][0],&d[i][1]);
    for(int i=0;i<k;i++)
    {
        max=0;
        for(int j=i+1;j<k;j++)
        {
            l=(d[i][0]-d[j][0])*(d[i][0]-d[j][0])+(d[i][1]-d[j][1])*(d[i][1]-d[j][1]);
            if(l>max)
            max=l;
        }
        d[i][2]=max;
        max=0;
    }
    for(int i=0;i<k;i++)
    {
        if(d[i][2]>max)
        max=d[i][2];
    }
    printf("%.4f",sqrt(max));
}
