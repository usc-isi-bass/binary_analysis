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

void f1(int a)
{ 
	int b;
	b = a * 3 + 1;
	cout<<a<<"*"<<3<<"+"<<1<<"="<<b<<endl;
}
void f2(int a)
{
	int b;
	b = a / 2;
	cout<<a<<"/"<<2<<"="<<b<<endl;;
}
int main()
{
	int x;
	cin>>x;
	while(x!=1)
	{
		if(x%2==0)
		{
		    f2(x);
		    x=x/2;
		}
	    if(x%2==1&&x!=1)
		{
            f1(x);
		    x=x*3+1;
		}
	}
	cout<<"End"<<endl;
	return 0;
}