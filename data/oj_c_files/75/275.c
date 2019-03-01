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
    int i,j,n,x[1005],y[1005],mark,max=0;
    char c;
    scanf("%d",&x[0]);
    i=1;
    while((c=getchar())==',')
    {
        scanf("%d",&x[i]);
        i++;
    }
    scanf("%d",&y[0]);
    i=1;
    while((c=getchar())==',')
    {
        scanf("%d",&y[i]);
        i++;
    }
    n=i;
    for(i=0;i<1000;i++)
    {
        mark=0;
        for(j=0;j<n;j++)
        {
            if(i>=x[j]&&i<y[j])
            mark++;
        }
        max=(max>mark)?max:mark;
    }
    printf("%d %d",n,max);
}
