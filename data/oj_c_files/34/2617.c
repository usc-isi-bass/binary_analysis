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

void jg(int n)
{
	int m;
	if(n!=1)
	{
		if(n%2==1)
		{
			m=3*n+1;
		cout<<n<<"*"<<3<<"+1="<<m<<endl;
		n=m;
		jg(n);
		}
		else
		{
			m=n/2;
			cout<<n<<"/2="<<m<<endl;
			n=m;
			jg(n);
		}
	}
	else
		cout<<"End"<<endl;
}

 
int main()
{
	int n;
	cin>>n;
	jg(n);
	return 0;
}