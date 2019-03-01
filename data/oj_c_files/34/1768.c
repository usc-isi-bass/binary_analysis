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

void s(int n)
{
	int a,b;
	if(n%2==1)
	{
		a=3*n+1;
		cout<<n<<"*3+1="<<a<<endl;
	}
	if(n%2==0)
	{
		b=n/2;
		cout<<n<<"/2="<<b<<endl;
	}
}//s????????
int t(int n)
{
	if(n%2==0)
		return n/2;
	if(n%2==1)
		return 3*n+1;
}//t??????n?
int main()
{
	int i,n;
	cin>>n;
	while(n!=1)
	{
	    s(n);
	    n=t(n);
	}
          cout<<"End"<<endl;
	return 0;
}
