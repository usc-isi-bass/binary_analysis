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
{
 int n,i,sum=0,j,b,t,*p;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 p=a;
 scanf("%d",&b);
 for(i=0;i<n;i++)
  if(*(p+i)==b) sum++;
 for(i=0;i<(n-sum);i++)
    if(*(p+i)==b) 
     {for(j=i;j<n-1;j++)
         {*(p+j)=*(p+j+1);}
      i--; }
 for(i=0;i<(n-sum-1);i++)
  printf("%d ",*(p+i));
  printf("%d",*(p+i));
}

