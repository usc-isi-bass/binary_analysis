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
	int a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d",&a);
    b=a/10000;
    c=a/1000;
    d=a/100;
    e=a/10;
    f=a%10;
    g=e%10;
    h=d%10;
    i=(a/10)%10;
    j=(a/100)%10;
    k=(a/1000)%10;
    if(b==0)
	{
		if(c==0)
        {
			if(d==0)
            {
				if(e==0)
                {
					printf("%d",f);
                }
                else
                printf("%d%d",f,e);
            }
            else
            printf("%d%d%d",f,g,d);
        }
        else
			printf("%d%d%d%d",f,i,h,c);
    }
    else
    printf("%d%d%d%d%d",f,i,j,k,b);
    return 0;
}