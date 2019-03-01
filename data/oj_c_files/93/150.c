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
    int a,x,y,z;
    char b;
    scanf("%d",&a);
    b='n';
    x=3;
    y=5;
    z=7;
    if(((a%3==0)&(a%5==0)&(a%7==0))==1)
    {
                                        printf("%d %d %d",x,y,z);
    }
    if(((a%3!=0)&(a%5!=0)&(a%7!=0))==1)
    {
                                         printf("%c",b);
    }
    if(((a%7==0)&(a%3!=0)&(a%5!=0))==1)
    {
                                       printf("%d",z);
    }
    if(((a%3==0)&(a%5!=0)&(a%7!=0))==1)
    {
                                       printf("%d",x);
    }
    if(((a%5==0)&(a%3!=0)&(a%7!=0))==1)
    {
                                       printf("%d",y);
    }
    if(((a%3==0)&(a%5==0)&(a%7!=0))==1)
    {
                                       printf("%d %d",x,y);
    } 
    if(((a%7==0)&(a%5==0)&(a%3!=0))==1)
    {
                                       printf("%d %d",y,z);
    }
    if(((a%3==0)&(a%7==0)&(a%5!=0))==1)
    {
                                       printf("%d %d",x,z);
    } 
    return 0;
}
