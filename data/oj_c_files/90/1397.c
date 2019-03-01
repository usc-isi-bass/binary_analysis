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
    int put(int ,int);
    int m,i,a,b;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",put(a,b));
    }
    return 0;
}

int put(int a,int b)
{
    int n;
    if(a==1||b==1)
    {
        n=1;
    }
    else
    {
        if(a-b>0)
        {
            n= put(a-b,b)+put(a,b-1);
        }
        else
        {
            if(a-b<0)
            {
                n=put(a,b-1);
            }
            else
            n=1+put(a,b-1);
            
        }
    }
    return n;
}
