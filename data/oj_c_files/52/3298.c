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
    int n,m,i,t;
    int a[200];
    scanf("%d %d",&n,&m);
    for (i=0;i<n;i++)
     scanf("%d",&a[i]);
    int l=0;
    while(l<m)
      {  
         t=a[n-1];       
         for (i=n-1;i>=1;i--)
         a[i]=a[i-1];
         a[0]=t;
         l++;
      } 
     for (i=0;i<n;i++)
       {
         if (i==0)
          printf("%d",a[i]);
         else
          printf(" %d",a[i]);
       }                  
     printf("\n");
     getchar();
     getchar();
} 
    
