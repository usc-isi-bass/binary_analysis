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
 int flag(int n);
 int m,i,a,b;
 scanf("%d",&m);
 while((m>=6)&&(m%2==0))
  {
   for(i=2;i<=m/2;i++)
    {
      if(flag(i)==0&&flag(m-i)==0)
      printf("%d %d\n",i,m-i);
    }
   break;
  }
}
int flag(int n)
{
 int c,k,i;
 k=sqrt(n);
 for(i=2,c=0;i<=k;i++)
  { 
   if(n%i==0) 
    {c=1;break;}
  }
 return(c);
}
