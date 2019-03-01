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

void Try(int n)
{
	if(n==1)
		cout<<"End";
	else
	{
	if(n%2==0)
	{
		cout<<n<<"/2="<<n/2<<endl;
		Try(n/2);
	}
	else
	{
		cout<<n<<"*3"<<"+1="<<3*n+1<<endl;
		Try(3*n+1);
	}	
	}
}
int main()
{
	int n;
	cin>>n;
	Try(n);
	return 0;
}