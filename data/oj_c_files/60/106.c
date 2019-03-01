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

int Prime( int n)
{
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n,a=0;
	cin>>n;
	for(int i=2;i+2<=n;i++)
	{
		if( Prime(i)&&Prime(i+2) )
		{
			cout<<i<<' '<<i+2<<endl;
			a=1;
		}
	}
	if(a==0)
		cout<<"empty";


return 0;
}