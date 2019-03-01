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
    if(num==0||num==-0)
        return 0;
        
    int x=abs(num);
    
    if(num<0)
        printf("-");
        
    while(x%10==0)
    {
        x/=10;
    }
    
    while(x!=0)
    {
        printf("%d", x%10);
        x/=10;
    }
    
    printf("\n");
    return 1;
}

int main()
{
    int num, i;
    for(i=0;i<6;i++)
    {
        scanf("%d", &num);
        
        if(reverse(num)==0)
            printf("0\n");
    }

    return 0;
}