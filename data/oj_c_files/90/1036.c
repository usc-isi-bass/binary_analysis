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

int f(int n,int m)
{
	int i,k=0;
	if (n==1||m==1||n==0) return 1;
	if (n>=m)
	{
		for (i=1;i<=m;i++) k+=f(n-i,i);
		return k;
	}
	if (n<m)
	{
		return f(n,n);
	}
}

int main()
{
	int k,n,i,m;
	cin>>k;
	for (i=1;i<=k;i++)
	{
		cin>>n>>m;
	cout<<f(n,m)<<endl;
	}
	return 0;
}