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
    char a[500];
    int l,i,j,m,p,n,k;
    scanf("%s",a);
    l=strlen(a);
    for(i=2;i<=l;i++)
    {
       for(j=0;j<=l-i;j++)
       {
          p=1;
          m=j;
          n=m+i-1;
          while(m>=0)
          {
            if(a[m]!=a[n])
            {
               p=0;
               break;
               }
               if(m==n||n-m==1)
               break;
               m++;
               n--;
               }
         if(p==1)
         {
                 for(k=j;k<=j+i-1;k++)//????j???m 
                 printf("%c",a[k]);
                 printf("\n");
                 }
        }
        }
        getchar();
        getchar();
}
