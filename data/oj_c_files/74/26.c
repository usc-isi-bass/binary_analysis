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

//var
int a,b,k,l;

//implementation
int prime(int n)
{
  int i,j;
  j=0;
  for(i=2;i*i<=n;i++){if (n%i==0){j=1;break;}}
  return(1-j);
}
int huiw(int n)
{
  int i,j;
  i=n;j=0;
  while (i!=0){j=j*10+i%10;i=i/10;}
  return(j==n);
}

void main()
{
  scanf("%d%d",&a,&b);
  l=0; for (k=a;k<=b;k++)if(prime(k)&&huiw(k))
  {if (l>0) printf(","); l++;printf("%d",k);}
  if (l==0)printf("no");
}