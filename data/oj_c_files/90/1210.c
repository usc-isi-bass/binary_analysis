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

int apple(int ,int );
int main()
{
	int t,i,m,n,a;
	cin>>t;
	for(i=1;i<=t;i++)
		{
			cin>>m>>n;
			a=apple(m,n);
			cout<<a<<endl;
	}
	return 0;
}
int apple(int m,int n)
{
	int a;
	if(m==1||m==0||n==1)
	{
		a=1;
	}
	else 
		{
			if(m>=n)
	{
		a=apple(m-n,n)+apple(m,n-1);
	}
	if(m<n)
	{
		a=apple(m,n-1);
	}
	}
	return a;
}