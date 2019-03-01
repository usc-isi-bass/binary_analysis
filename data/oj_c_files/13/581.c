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
{int n,i,j,k,m=0;;
 int a[20001];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1-m;i++)
  for(j=i+1;j<n-m;)
   if(a[j]==a[i])
   {for(k=j;k<n-m;k++)
    a[k]=a[k+1];
    m++;}
   else j++;
  for(i=0;i<n-1-m;i++)
  printf("%d ",a[i]);
  printf("%d",a[n-m-1]);
}
