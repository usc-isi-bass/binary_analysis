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
int full(int M,int N);
int empty(int M,int N);
int t,a[20],b[20],i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
scanf("%d",&b[i]);
}
for(i=0;i<t;i++)
{printf("%d\n",full(a[i],b[i])+empty(a[i],b[i]));}
}
int full(int M,int N)
{int empty(int M,int N);
int c;
if(N==1)
c=1;
else
if (M<N)
c=0;
else
if (M==N)
c=1;
else
if (M>N)
c=full(M-N,N)+empty(M-N,N);
return(c);
}
int empty(int M,int N)
{int full(int M,int N);
int c;
if(N==1)
c=0;
else
if(N==2)
c=1;
else
c=full(M,N-1)+empty(M,N-1);
return(c);
}
