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


int f(int m,int n)
{
    int a;
    if(n==1) a=1;
    else a=(f(m,n-1)+m)%n;
    if(a==0) a=n;
  
    return a;
}
    
main()
{
    int i,m,n;
    for(i=1;;i++)
    {
          scanf("%d %d",&n,&m);
          if(m!=0) printf("%d\n",f(m,n));
          else     break;
    }
 
}
