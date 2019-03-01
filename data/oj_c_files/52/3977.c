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
 int i,a[10000],n,m;
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=n-m;i<2*n-m-1;i++)
  printf("%d ",*(a+i%n));
 printf("%d",*(a+n-m-1)); 
 getchar();
 getchar();
 return 0;    
}
