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


int a=0;
int fang(int m,int n)
{
    if (n==1)
	   a=1;
    if (m==0);
       a=1;
	if ((m<n)&&(n>1))
	   a=fang(m,n-1);
	if ((m>=n)&&(n>1))
       a=fang(m,n-1)+fang(m-n,n);
	//cout<<a;
   return (a);
}
int main()
{
    int t,i;
	cin>>t;
	for (i=0;i<t;i++)
	{
       int m,n;
	   cin>>m>>n;
	   cout<<fang(m,n)<<endl;
	}
    return 0;
}