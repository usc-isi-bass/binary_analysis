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
      int n,i=1,m,j,k;
      scanf("%d",&n);
       int a[n];
      while(i<=n)
      {scanf("%d",&m);
      a[i]=m;
      i++;} 
      int l=1;
      while(l<=n)
      {
                 if(l==1)
                 printf("%d",a[l]);
                 else
                 {
                     j=1;
                     k=0;
                     while(j<l)
                     {if (a[l]==a[j])
                     k=k+1;
                     j++;}
                 if(k==0)
                 printf(" %d",a[l]);
                 }             
      l++;
      }
      getchar();
      getchar();
}