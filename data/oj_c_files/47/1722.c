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

void inv(int x[],int n)
{
     int temp,i,j,m=(n-1)/2;
     for(i=0;i<=m;i++)
     {
                     j=n-1-i;
                     temp=x[i];x[i]=x[j];x[j]=temp;
                     }
                     return;
                     }
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    inv(a,n);
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
    
    printf("%d",a[n-1]);
     return 0;
}  
    
    
    
