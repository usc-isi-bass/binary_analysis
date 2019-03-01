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
int a[20000];
int n,i,j,s,k;
scanf("%d",&n);
for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
for(i=0;i<n;i++)
  {
     s=a[i];
     for(k=i+1;k<n;k++)
     {
       if(a[k]==s)
       {       
        for(j=k;j<n;j++)
        {
         a[j]=a[j+1];
        }
        n--;
        k--;        
       }
     }
   }
for(i=0;i<n;i++)
  {
   if(i>0)
   printf(" ");
   printf("%d",a[i]);
  }
return 0;
}
