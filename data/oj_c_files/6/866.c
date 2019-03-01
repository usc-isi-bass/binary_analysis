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
  int a,i,t,j,sum,m,n;
  scanf("%d\n",&t);
  for(j=0;j<t;j++)
  {
   scanf("%d %d\n",&m,&n);
   sum=0;
   for(i=1;i<=m*n;i++)
   {
    scanf("%d",&a);
    if((i<=n)||(i>(m*n-n))||(i%n==1)||(i%n==0)) sum+=a;
   }
   printf("%d\n",sum);
   }
   return 0;
}