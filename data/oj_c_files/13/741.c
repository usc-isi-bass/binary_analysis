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
    int i,j,s,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    if(i==0)
    {printf("%d",a[0]);}
    else
    {                
    for(j=0;j<=i-1;j++)
    {
    if(a[j]==a[i])
    {
    a[i]=0;
    break;
    }
    }
    if(a[i])
    {printf(" %d",a[i]);}
    }
    }
printf("\n");
getchar();
getchar();
getchar();
return 0;
}
