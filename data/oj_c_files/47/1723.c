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

void inv(int *x,int n)
{
     int temp,*p,*i,*j,m=(n-1)/2;
     i=x;j=x+n-1;p=x+m;
     for(;i<=p;i++,j--)
     {
                     temp=*i;*i=*j;*j=temp;
                     }
                     return;
                     }
int main()
{
    int i,n,a[100],*p;
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    scanf("%d",p++);
    inv(a,n);
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
    
    printf("%d",a[n-1]);
     return 0;
}  