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

int fun(int a,int b)
{
    if(a==b)
        return 233;
    else
        if((a==1&&b==2)||
           (a==0&&b==1)||
           (a==2&&b==0))
            return 1;
        else
            return 0;

}

main()
{
    int n,i,l,na=0,nb=0;
    int a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(fun(a,b)==1)
            na++;
        if(fun(a,b)==0)
            nb++;
        else continue;
    }
    if(na>nb)
        printf("A");
    if(na==nb)
        printf("Tie");
    if(na<nb)
        printf("B");
}
