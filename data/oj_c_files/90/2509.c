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
int full(int a,int b);
int notfull(int c,int d);
int i,m,apple,plate;
int ways(int M,int N);
scanf("%d",&m);
for(i=1;i<=m;i++)
 {
 scanf("%d%d",&apple,&plate);
 printf("%d\n",ways(apple,plate));
 }

}

int ways(int M,int N)
{
int full(int a,int b);
int notfull(int c,int d);
int i,j,k,number;
if(N>1)
 { if(M>N)
     number=full(M,N)+notfull(M,N);
   else if(M==N)
     number=full(M,N)+notfull(M,N);
   else if(N>M>0) number=ways(M,M);
 }
if(N==1) number=1;
if(M==0) number=1;
return(number);

}

int full(int a,int b)
{
int f;
f=ways((a-b),b);
return(f);
}

int notfull(int c,int d)
{
int l;
l=ways(c,(d-1));
return(l);
}
