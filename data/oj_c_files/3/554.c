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
 int a[1000],b,c,d,i,n,j,k;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(a[i]+a[j]==k)
 {
  printf("yes\n");
 goto loop;
  }
 printf("no\n");
loop:
 b=0;
}