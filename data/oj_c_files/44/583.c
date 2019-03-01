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

int  f(int n)
{
	if (n==0) 
	{
		cout <<n<<endl;
		return 0;
	}
	if (n<0) 
	{
		cout <<'-';
		return f(-n);
	}
	cout <<n%10;
	if (n/10!=0)
		return f(n/10);
	else cout<<endl;
}
int main()
{
	int n;
	while(cin>>n)
	{
		while (n%10==0&&n!=0)
		{
			n/=10;
		}
		f(n);
	}
	return 0;
}