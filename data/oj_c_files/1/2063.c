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

int shuliang(int m,int n);
main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1;i <= n;i ++)
    {
        int x,q,answer=1;
        scanf("%d",&x);
        q=sqrt(x)+1;
        for (int j = 2; j < q; j ++)
        {
            if (x%j==0)
                answer+=shuliang(j,x/j);
                
        }
        printf("%d\n\n",answer);
    }
}

int shuliang(int m,int n)
{
    int q,answer=0,y=0;
    q=sqrt(n)+1;
    for (int j = m;j < q;j ++)
    {
        if (n%j==0)
            answer+=shuliang(j,n/j),y=1;
    }
    if(y==1)
        return answer+1;
    else
        return 1;
}