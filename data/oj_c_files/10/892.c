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
    int i,j,k,n,t,flag=0;
    int a[30],b[30];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
    b[i]=1;
    for(j=n-1;j>=i;j--)
       {
        if(a[i]>=a[j])
        {flag=1;
        if(b[i]<b[j])
        b[i]=b[j];}          
       } 
    b[i]=b[i]+1;
    if(flag==0)
   {b[i]=1;}               
    }
    for(i=0;i<n;i++)
    {if(b[0]<b[i])
    b[0]=b[i];}
    printf("%d",b[0]-1);
}
