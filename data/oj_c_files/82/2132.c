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
    struct
    {
        int x;
        int y;
    } sz[100];
    int n,i,a=0,b=0,cs[100],max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&sz[i].x,&sz[i].y);
        if(sz[i].x>=90&&sz[i].x<=140&&sz[i].y>=60&&sz[i].y<=90)
        {
            a+=1;
            if(i==n-1)
            {
                max=a;
            }
        }
        else
        {
            cs[b]=a;
            a=0;
            b+=1;
            if(i==n-1)
            {
                max=cs[0];
            }
        }
    }
    for(i=0;i<b;i++)
    {
            if(cs[i]>max)
            max=cs[i];            
    }
    printf("%d",max);
    return 0;
}

