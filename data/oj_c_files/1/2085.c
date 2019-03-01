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

int g(int y)
{
	int i;
	for(i=0;;i++)
	{
		if(i*i>y)
			break;
	}
	return i-1;
}
int f(int x,int b)
{
	int p,a[100],t=0,k=0;
	p=g(x);
	if(x==2)
		return 0;
	else
	{
	for(int i=b;i<=p;i++)
	{
		if(x%i==0)
		{
			a[t]=i;
			t++;
		}
	}
	if(t==0)
		return 0;
	else
		for(int i=0;i<t;i++)
			k=k+f(x/a[i],a[i])+1;
		return k;
	}
}
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		cout<<f(a,2)+1<<endl;
	}
	return 0;
}