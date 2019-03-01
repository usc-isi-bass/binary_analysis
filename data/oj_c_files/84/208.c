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
    int max1,max2,n,i;
    scanf ("%d",&n);
    int a[n];
    i=0;
    max1=a[n-1]; 
    for(i=0;i<=n-1;i++)
    {
              scanf("%d",&a[i]);
    }
    i=n-1; 
    for(i=n-1;i>=1;i--)
    {
                       if(a[i-1]<a[i])
                       {
                                      max1=a[i];
                                      a[i]=a[i-1];
                                      a[i-1]=max1;
                       }
    } 
    i=n-1;
    max2=a[n-1];
    for(i=n-1;i>=2;i--)
    {
                       if(a[i-1]<a[i])
                       {
                                      max2=a[i];
                                      a[i]=a[i-1]; 
                                      a[i-1]=max2;
                       }
    } 
    printf("%d\n%d\n",a[0],a[1]);
    scanf("%d",i); 
    return 0;
} 