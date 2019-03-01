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
	void f(int x);
	int n,i;
	for(i=0;i<6;i++)
	{
		cin>>n;
		if(n>0)//?n?????
		{
			while(n%10==0)
				n=n/10;
			f(n);
			cout<<endl;
		}
		if(n<0)
		{
			n=-n;
			while(n%10==0)
				n=n/10;
			cout<<'-';
			f(n);
			cout<<endl;
		}
		if(n==0)
			cout<<'0'<<endl;
	}
	return 0;
}
void f(int x)//??????
{
	cout<<x%10;
	if((x/10)>0)
	{
		x=x/10;
		f(x);
	}
}