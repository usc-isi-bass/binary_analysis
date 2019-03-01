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
int n,a[305]={0},i=0,j,y[305]={0},k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

i=0;
for(i=0;i<n;i++)
{  
   if(y[i]==0) 
   {
      k++;
      if(k==1) printf("%d",a[i]);
      else printf(",%d",a[i]);
   }
   j=i;
   for(j=i;j<n;j++)
   {
      if(a[i]==a[j])
      y[j]=1;
   }
}
return 0;
}