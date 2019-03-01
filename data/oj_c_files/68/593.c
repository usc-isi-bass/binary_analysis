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

int sushu(int n)
{
 int i,s=1;
 for(i=2;i<=sqrt(n);i++)
  if(n%i==0) 
  {
   s=0;
   break;
  }
 return(s);
}
main()
{
 int n,i,j;
 scanf("%d",&n);
 for(i=6;i<=n;i=i+2)
  for(j=3;j<=i/2;j++)
   if(sushu(j)&&sushu(i-j))
   {
	printf("%d=%d+%d\n",i,j,i-j);
	break;
   } 
}
