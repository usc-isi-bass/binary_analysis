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

int main ()
{
    int p[50000];
    int n,i,t,x,y;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        p[i]=0;
    scanf("%d %d",&x,&y);
    while(x!=0||y!=0)
    {
        if (x!=y)
        {p[x]--;
        p[y]++;}
        scanf("%d %d",&x,&y);
    }
    t=1;
    for(i=0;i<n;i++) if(p[i]==n-1)
    {
        printf("%d",i);
        t=0;
        break;
    }
    if (t) printf("NOT FOUND");
}
