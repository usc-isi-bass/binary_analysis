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
    int a[100],n,i,j,m,temp;
    int *p,*q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}

    for(j=0;j<n/2;j++)
  { p=&a[j];
  q=&a[n-1-j];
   temp=*p;
   *p=*q;
   *q=temp;
 
}

    for(m=0;m<n-1;m++)
   { printf("%d ",a[m]);} 
 printf("%d",a[n-1]);
    return 0;}