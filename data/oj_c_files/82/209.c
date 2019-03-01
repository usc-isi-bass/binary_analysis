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
    
    int i,s,n,t;
    s=0;
    t=0;
    scanf("%d",&n);
    struct pulse
    {
           int x;
           int y;
    } a[n];
    for(i=1;i<=n;i++)
    {
                     scanf("%d %d",&a[i].x,&a[i].y);
    }
    for(i=1;i<=n;i++)
    {
                     if(a[i].x<=140&&a[i].x>=90&&a[i].y<=90&&a[i].y>=60)
                     {
                         s++;
                         if(t<s) t=s;
                     }
                     else s=0;
    }
    printf("%d",t);
 
    return 0;
    
}                  
