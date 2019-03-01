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
int i,j,k;
int n,m;
int *p,a[100];
p=a;
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
  scanf("%d",p+i);
for(i=0;i<m;i++)
  printf("%d ",*(p+i+n-m));
for (i=m;i<n-1;i++)
  printf("%d ",*(p+i-m));
 printf("%d",*(p+n-m-1));

}