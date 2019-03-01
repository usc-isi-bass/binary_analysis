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

int main(int argc,char*argv[])
{
    long int m,n,k,a,i;
    scanf("%ld%ld",&n,&k);
    for(a=1;a<=m;a++)
    {m=a*n+k;
     for(i=1;i<=n-1;i++)
     {if(m%(n-1)!=0) break;
      m=m/(n-1)*n+k;} 
      if(i==n)
      {printf("%ld\n",m);
       break;}}
      return 0;
}
