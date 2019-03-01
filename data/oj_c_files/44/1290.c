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

int num,s;
int reverse(int num)
{
    s=0;
    while(num!=0)
    {
    s=s*10+num-((int)(num/10))*10;
    num=num/10;
    }
    return s;
}

main()
{
    int x;
    for(int i=1;i<=6;i++)
    {
    scanf("%d",&x);
    if(x>=0)
    printf("%d\n",reverse(x));
    if(x<0)
    {x=(-1)*x;printf("%d\n",(-1)*reverse(x));}
    }
getchar();getchar();getchar();getchar();getchar();getchar();
}
