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

int reverse(int num)
{
    int x=0,y=0,k=0;
    if(num==0)
    return 0;
    printf("\n");
    while(num>0)
    {
        x=num%10;
        y=y*10+x;
        num=num/10;
        if(num==0)
        break;
    }
    return y;
}
main()
{
    int n[6],i;
    for(i=0;i<6;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]>=0)
        {
            reverse(n[i]);
            printf("%d\n",reverse(n[i]));
        }
        else
        {
            reverse(-n[i]);
            printf("-%d\n",reverse(-n[i]));
        }
    }
}