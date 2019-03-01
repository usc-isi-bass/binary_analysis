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
    int n,i,j;
    int a[20001];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    
    for(j=0;j<n;j++)
    {
       if(a[j]>=10&&a[j]<=100)
       {
       for(i=j+1;i<n;i++)
       {
          if(a[i]>=10&&a[i]<=100)
          {if(a[j]==a[i])
          {a[i]=0;}}                                    
       }
       }                                   
    }
    printf("%d",a[0]);
    for (i=1;i<n;i++)
    {
        if (a[i]!=0)
    {printf(" %d",a[i]);}
    }
    
    getchar();
    getchar();
    getchar(); 
    
    
    
    
    
}
