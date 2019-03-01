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
    int i,j,k,m=0,n;
    double b[10000]={0},max;
    scanf("%d",&n);
    struct point
    {
        float x;
        float y;
    };
    struct point *p;
    p=(struct point*)malloc(sizeof(point)*n);
    for(i=0;i<n;i++)
    scanf("%f%f",&(p+i)->x,&(p+i)->y);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            b[m]=((p+i)->x-(p+j)->x)*((p+i)->x-(p+j)->x)+((p+i)->y-(p+j)->y)*((p+i)->y-(p+j)->y);

            b[m]=(double)sqrt(b[m]);
            m++;
        }
    }
    max=b[0];
    for(i=0;i<m;i++)
    {
        if(b[i]>max)
        {
            max=b[i];

        }
    }

    printf("%.4f\n",max);
    free(p);
}



