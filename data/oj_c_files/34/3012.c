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

int p;
int oushu(int a)
{
	p=a/2;
	cout<<a<<"/2="<<p<<endl;
	return p;
}
int jishu(int a)
{
	p=a*3+1;
	cout<<a<<"*3+1="<<p<<endl;
	return p;
}
int main()
{
	int a;
	cin>>a;
	while(a!=1)
	{
		if(a%2==0)
		{
			oushu(a);
			a=p;
		}
		else
		{
			jishu(a);
			a=p;
		}
	}
	cout<<"End";
	return 0;
}


