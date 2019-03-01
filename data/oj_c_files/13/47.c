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

int main()
{
	int n=0,x=0,a[100]={0},i=0;
	cin>>n;
	cin>>x;
	cout<<x;
	a[x-1]=1;
	for(i=2;i<=n;i++)
	{
		cin>>x;
		if(a[x-1]==0)
		{
			cout<<" "<<x;
			a[x-1]=1;
		}
	}
	return 0;
}
