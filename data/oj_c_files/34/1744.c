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

void f(int x)
{
	int s;
	if(x==1)
		cout<<"End"<<endl;
	else
	{
		if(x%2==1)
			{
			s=x*3+1;
			cout<<x<<"*3+1="<<s<<endl;
			f(s);
			}
		if(x%2==0)
		{
			s=x/2;
			cout<<x<<"/2="<<s<<endl;
			f(s);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	f(n);
	return 0;
}