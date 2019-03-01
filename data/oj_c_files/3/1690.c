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

  int main(){
   int i,j,s,m,n,k;
   m=0;
   int x[1000],a[1000],b[1000];
   scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
{
   scanf("%d",&x[i]);
}
    for(i=0;i<n-1;i++)
    { for(j=i+1;j<n;j++)
      {  s=x[i]+x[j];
         if(s==k)
        {  printf("yes");
        m++; 
        break;}
      }
   if(m!=0)
     break;}
    if(m==0)
    printf("no");
   return 0;
}