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
    int m,n,i,y=0,h,x=1;
    for(h=1;h<=20;h++)
    
{
    scanf("%d %d",&n,&m);
    if(m!=0&&n>=2)
    
{
    for(i=2;i<=n;i++)
    y=(y+m)%i;
    printf("%d\n",y+1);
    y=0;
}
    else if(n==1)
    printf("%d\n",x);
    else if(m==0&&n==0) 
    break;
}
 
}
