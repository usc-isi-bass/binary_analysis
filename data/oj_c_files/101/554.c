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

int main(void)
{
    int a , b , c, a1, b1, c1, i;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=3;b++)
        {
            for(c=1;c<=3;c++)
            {
                a1 = (b>a)+(c==a);
                b1 = (a>b)+(a>c);
                c1 = (c>b)+(b>a);
            if((a+a1)==(b+b1)&&(a+a1)==(c+c1))
            {
                for(i=1;i<=3;i++){
                if(a==i)
                printf("A");
                if(b==i)
                printf("B");
                if(c==i)
                printf("C");}



            }
            }

        }
    }
    return 0;
}