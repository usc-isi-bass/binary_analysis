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
    int b,n,k,i,c=0;
    scanf("%d%d",&n,&k);
    int a[1000];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        
     
     for(b=0;b<n;b++)
    {
     for(i=0;i<n;i++)
     {if(i!=b)
     {if(a[b]+a[i]!=k)
     {c=c+1;
     continue;}
     else 
     break;}}}
    
     
     
     if(c==n*(n-1))
     printf("no");
     if(c!=n*(n-1))
     printf("yes");
     
     return 0;
     }
