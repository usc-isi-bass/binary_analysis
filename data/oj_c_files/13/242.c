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
    int n,i,j,x,a[20000]={0},b[20000]={0};
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
         scanf("%d ",&a[i]);
    b[0]=a[0];
    for(j=1;j<=n;j++)
    {
                     x=0;
                     for(i=0;i<j;i++)
                     {
                                     if(a[j]==a[i])
                                     x++;
                     } 
                     if(x==0)
                     b[j]=a[j];
                     else b[j]=0;
    }
    printf("%d",b[0]); 
    for(i=1;i<n;i++)
    {
                     if(b[i]!= 0)
                     printf(" %d",b[i]);
    }    
    getchar();
    getchar();
}                      
                       