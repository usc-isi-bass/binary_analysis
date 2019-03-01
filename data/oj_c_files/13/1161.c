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
 int N;
 scanf("%d",&N);   
 int a[N],b[N];
 int i,j,k,n,m = 0,flag;
 for(i = 0; i <= N; i++)
  scanf("%d",&a[i]);
 for(i = 0; i < N; i++)
 {
  flag = 1;
  for(j = 1; j <= m; j++)
   if(a[i] == b[j])
   {
    flag = 0;
    break;
   }
   if(flag)
   {
    b[j] = a[i];
    m++;
   }
 }
 printf("%d",b[1]);
 for(i = 2; i <= m; i++)
  printf(" %d",b[i]);
}
