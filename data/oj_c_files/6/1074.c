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

main()
{
int nn,ii;
scanf("%d",&nn);
for(ii=1;ii<=nn;ii++)
{
    int n,m,t,i,j,x,y,sum=0;
    scanf("%d %d",&y,&x);
    for(i=1;i<=y;i++)
    {
        for(j=1;j<=x;j++)
        {
            scanf("%d",&t);
            if(i==1||i==y||j==x||j==1)
            {sum+=t;}
        }
    }
    printf("%d\n",sum);
}
}
