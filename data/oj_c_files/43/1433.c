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

int judge(int x)
{
    int i,j=1;
    for(i=2;i*i<=x;i++)
    if(x%i==0)
    {
        j=0;
        break;
    }
    return j;
}
void main()
{
    int m,i,j,p,q;
    scanf("%d",&m);
    for(i=2;i<m;i++)
    if(judge(i))
    {
        p=i;
        for(j=i;j<m;j++)
        if(judge(j))
        {
            q=j;
            if(p+q==m)
            {
                printf("%d %d\n",p,q);
                break;
            }
        }
    }
}