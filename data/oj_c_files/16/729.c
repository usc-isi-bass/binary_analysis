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

//#include <math.h>
//#include <stdlib.h>

int main(void)
{
    int num,temp=0,sub=0,dv=10;;
    scanf("%d",&num);
    int a,b=1;

    if (num==0)
    {
        printf("0");
        return 0;
    }

    while (num!=sub)
    {
        temp=(num-(num/dv)*dv-sub)/(dv/10);
        sub+=temp*(dv/10);

        printf("%d",temp);
        dv*=10;
    }

    return 0;
}

