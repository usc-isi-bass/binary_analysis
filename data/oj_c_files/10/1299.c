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
 int i,j,rec[25],n[25],m,k;
 scanf("%d",&k);
 for(i=0;i<=k-1;i++)
 {
  scanf("%d",&rec[i]);
  n[i]=1;
 }
 for(i=1;i<=k-1;i++)
  for(j=0;j<i;j++)
   if(rec[j]>=rec[i])
    n[i]=n[i]>(n[j]+1)?n[i]:n[j]+1;
 m=0;
 for(i=0;i<k;i++)
  m=m>n[i]?m:n[i];
 printf("%d\n",m);
 }

