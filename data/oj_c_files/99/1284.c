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
    int a,b,c,d,i,n,p;
    a=b=c=d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p);
        if(p<=18)
        a++;
        else if(p>=19&&p<=35)
        b++;
        else if(p>=36&&p<=60)
        c++;
        else 
        d++;
    }
    printf("1-18: %.2lf%%\n",a*100.0/n);
    printf("19-35: %.2lf%%\n",b*100.0/n);
    printf("36-60: %.2lf%%\n",c*100.0/n);
    printf("Over60: %.2lf%%\n",d*100.0/n);
    
    
    
    return 0;
    
}
