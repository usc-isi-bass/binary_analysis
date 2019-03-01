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

int num=1,k=0;
int count(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0&&i>=k)
		{
			num++;
			k=i;
			count(n/i);
			k=0;
		}
	}
	return (num);
}
int main()
{
	int i,n,a[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{cout<<count(a[i])<<endl;num=1;k=0;}
	return 0;
}