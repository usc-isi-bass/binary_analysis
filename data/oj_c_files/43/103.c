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

int prime(int n)
{
    int i=3;
    for(i=2;i<n/2+1;i++)
   { 
   if(n%i==0)
    return(0);
}  
 return(1);
}
main()
{
 int m,n,i,j,k;
 scanf("%d",&m);
 for(i=3;i<(m/2)+1;i++)
  {
    j=prime(i);
    k=m-i;
    n=prime(k);
    if(j!=0&&n!=0)
    printf("%d %d\n",i,k);
  
  }
  getchar();
  getchar();
}
