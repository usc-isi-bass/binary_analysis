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
    int i,j,k,m,n,a[100];
    int *p;
    p=a;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    p=p+n-m;
    for(i=0;i<m;i++)
      printf("%d ",*(p+i));
      p=a;
      for(i=0;i<n-m-1;i++)
      printf("%d ",*(p+i));
      printf("%d",*(p+i));
      return 0;
}
    
    
