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
    int n,i,a,flag;
    scanf("%d",&n);
    if(n<5) printf("empty");
    else
    {for(a=3;a<=n-2;a++)
    {
        flag=0;
        for(i=2;i<a;i++)
        {
            if(a%i==0) flag=1;
        }
        if(flag==0)
        {
            for(i=2;i<a+2;i++)
            {
                if((a+2)%i==0) flag=1;
            }
        }
        if(flag==0) printf("%d %d\n",a,a+2);
    }
    }
}
