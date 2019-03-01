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

struct p
{
    char name[100];
    float t;
    int judge;
};
int main()
{
    int m,x,y;
    scanf("%d",&m);
    scanf("%d %d",&x,&y);
    double c,d;
    c=(double)y/x;
    int a1,a2;
    for(int i=0;i<=m-2;i++)
    {
        scanf("%d %d",&a1,&a2);
        d=(double)a2/a1;
        if(c-d>0.05)
        {
            printf("worse\n");
        }
        else if(d-c>0.05)
        {
            printf("better\n");
        }
        else
        {
            printf("same\n");
        }
    }
}
