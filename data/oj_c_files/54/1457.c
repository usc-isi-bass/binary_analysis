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

int n,k;
int Div(int rest,int w)
{
	if (w==0)
	{
		return rest;
	}
	if (rest%(n-1)!=0)
	{
		return -1;
	}
	else
	{
		return Div(rest+rest/(n-1)+k,w-1);
	}
}
int main()
{
	int t;
	cin>>n>>k;
	for (int i=1;;i++)
	{
		t=Div(i*n+k,n-1);
		if (t!=-1)
		{
			cout<<t;
			return 0;
		}
	}
	return 0;
}