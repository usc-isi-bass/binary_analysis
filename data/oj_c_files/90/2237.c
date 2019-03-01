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

int la(int n,int m )
{
	if (n==0)return 1;
	if (n==1)return 1;
	else 
	{
		int p;
		if (m>=n)
		{
			p = la(n,m-n)+la(n-1,m);
		}
		else
		{
			p = la(n-1,m);
		}
		return p;
	}
}

int main()
{
	int k;
	cin>>k;
	for (int i =1;i<=k;i++)
	{
		int n,m;
		cin>>m>>n;
		cout<<la(n,m)<<endl;
	}
}