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

int run(int n)
{
    if(n%4==0&&n%100!=0)
        return 1;
    else if(n%400==0)
        return 1;
    else
        return 0;
}
main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int y,m1,m2,t,day=0;
        int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        scanf("%d %d %d",&y,&m1,&m2);
        if(run(y)==1)
            a[1]=29;
        if(m1>m2)
        {
            t=m1;
            m1=m2;
            m2=t;
        }
        for(int j=m1;j<m2;j++)
        {
            day+=a[j-1];
        }
        if(day%7==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

