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

int ways(int,int);
int main()
{
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		cout<<ways(m,n)<<endl;
	}
	return 0;
}
int ways(int m,int n)
{
	int sum=0;
	if(n==1)sum=1;
	else if(m<0)sum=0;
	else if(m==0)sum=1;
	else sum=sum+ways(m,n-1)+ways(m-n,n);
	return sum;
}