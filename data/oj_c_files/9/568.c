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
    int n,j,i;
    scanf("%d",&n);
    char a[n][10];
    int b[n];
    for(j=0;j<n;j++)
    scanf("%s %d",a[j],&b[j]);
    for(i=100;i>=60;i--) 
    {
                         for(j=0;j<n;j++)
                         {if(b[j]==i)
                         printf("%s\n",a[j]);
                         }
     }
     
     for(j=0;j<n;j++)
     {
                     if(b[j]<60)
                     printf("%s\n",a[j]);
      }
    
    
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    

}