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

struct point
{
    float x;
    float y;
};
float d(struct point a,struct point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main()
{
    int i,j,n;
    float m=0;
    struct point a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%f %f",&a[i].x,&a[i].y);
    }
    for(i=0;i<n-1;i++)
       for(j=i+1;j<n;j++)
          if(d(a[i],a[j])>m)
             m=d(a[i],a[j]);
    printf("%.4f\n",m);
}
