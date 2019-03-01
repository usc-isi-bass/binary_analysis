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

int a[26];
int main()
{
    int d(int xz,int p,int q);
    int y,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }
    y=d(10000,1,n);
    printf("%d",y);    
}
int d(int xz,int p,int q)
{
    int g,h;
    if (p==q&&a[p]<=xz) return 1;
    else if(p==q&&a[p]>xz) return 0;
    else 
    {
         if(xz<a[p]) return(d(xz,p+1,q));
         else
         {
         g=1+d(a[p],p+1,q);
         h=d(xz,p+1,q);
         if(g>h) return(g);
         else return(h); 
         }         
    }
}
