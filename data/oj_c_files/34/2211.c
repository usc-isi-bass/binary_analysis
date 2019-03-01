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

void d(int);
int main()
{
	int a;
	cin>>a;
	d(a);
	return 0;
}
void d(int a)
{
	while(a!=1)
	{
		if(a%2==0)
		{
			cout<<a<<"/2="<<a/2<<'\n';
			a=a/2;
		}
		else
		{
			cout<<a<<"*3+1="<<a*3+1<<'\n';
			a=a*3+1;
		}
	}
	cout<<"End"<<endl;
}
