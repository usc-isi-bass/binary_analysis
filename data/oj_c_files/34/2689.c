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

void a(int n)
{
	if(n==1)
	{
		cout<<"End"<<endl;
		return;
	}
	switch(n%2)
	{
	case 1:
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			a(n*3+1);
			break;
		}
	case 0:
		{
			cout<<n<<"/2="<<n/2<<endl;
			a(n/2);
			break;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	a(n);
}