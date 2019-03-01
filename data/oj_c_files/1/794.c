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

int fjys(int x,int y)
{
	if(x<y)
		return 0;
	int i,n=1;
	for(i=y;i<x;i++)
	{
		if(x%i==0)
		{
			n+=fjys(x/i,i);
		}
	}
	return n;
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<fjys(a[i],2)<<endl;
	}
	return 0;
}