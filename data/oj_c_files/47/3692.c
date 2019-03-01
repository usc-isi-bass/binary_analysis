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
    int a[100],i,temp,n;
    scanf ("%d\n",&n);
    for (i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);    
    }
    for(i=1;i<=n/2;i++)
    {
       temp=a[i];
       a[i]=a[n+1-i];
       a[n+1-i]=temp;   
    }
    for(i=1;i<n;i++)
    {
    printf("%d ",a[i]);                 
    }
    printf("%d",a[n]);
    return 0;
}