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

int cal(int m,int n);
int main(int argc)
{  int i,t,p,q;
   cin>>t;
   for (i=1;i<=t;i++)
   { cin>>p>>q;
   cout<<cal(p,q)<<endl;}      //????

	return 0;

}
int cal(int m,int n)
{ int x;
 if (n==1||m==0)
	{x=1;}
 else if (m==2&&n!=1)
 {x=2;}
 else if(m==1)
 {x=1;}
	else if (n>m)
	{x=cal(m,m);}         //???????
	else 
	{ x=cal(m,n-1)+cal(m-n,n);}      //??????
	return x;}