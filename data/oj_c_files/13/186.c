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

void main()
{int a[20001];
int i,k,j=0,n,fil=101,m=0,g=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
k=0;
a[n]=101;

while(k<n)
{
  
for(i=0;i<k;i++)
   {
    if(a[i]==a[k])
    k++;
   }
for(i=0;i<k;i++)
   {
    if(a[i]==a[k])
    k++;
   }
if(k==0)
printf("%d",a[k]),k++;

else
if(k<n&&k>0)
printf(" %d",a[k]),k++,m++;
}

}