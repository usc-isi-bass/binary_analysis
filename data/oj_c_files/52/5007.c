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

void f(int *p,int n,int m)
{
 int i;
 for(i=(n-1);i>=0;i--)
 *(p+i+m)=*(p+i);
 for(i=n;i<(n+m);i++)
  *(p+i-n)=*(p+i);
}
int main()
{
 int *p,a[100],n,m,i;
  scanf("%d",&n);
  scanf("%d",&m);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 p=a;
 f(p,n,m);
 for(i=0;i<n;i++)
 { printf("%d",a[i]);
if(i!=(n-1)) printf(" ");}
 return 0;
}
