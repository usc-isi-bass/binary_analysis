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

int fang(int m,int n);//??????
int main()
{
int p,i,m,n;
cin>>p;
for(i=1;i<=p;i++)
{
cin>>m>>n;
cout<<fang(m,n)<<endl;//????
}
return 0;
}
int fang(int m,int n)
{
int sum;
if(n==1||m==1||m==0)//????
sum=1;
else if(m<0)
sum=0;
else sum=fang(m,n-1)+fang(m-n,n);//???
return sum;
}