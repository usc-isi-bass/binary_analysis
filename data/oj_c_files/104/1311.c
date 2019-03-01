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
	int t,n,m;
	cin>>n>>m;
	while(1)
	{
		if(n<m)
		{
			t=n;n=m;m=t;
		}
		if(n==m)
		{
			cout<<n;
			return 0;
		}
		if(n-1==m&&n%2==1)
		{
			cout<<n/2;
			return 0;
		}
		n/=2;
		if(m==1)
		{
			cout<<"1";
			return 0;
		}
	}
}
