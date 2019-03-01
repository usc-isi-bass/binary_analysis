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
 int a[101],i,j,n,m;
 scanf("%d\n",&n);
 i=m=1;
 while(i<n+1)
 {
  scanf("%d\n",&a[i]);
  i=i+1;
 }
 i=j=1;
for(j=1;j<=n- 1;j++)
for(i=1;i<=n- j;i++)
if(a[i]>a[i+1])
{m=a[i]; a[i]=a[i+1]; a[i+1]=m;}
  
 printf("%d\n",a[n]);
 printf("%d\n",a[n-1]);
return 0;
}
