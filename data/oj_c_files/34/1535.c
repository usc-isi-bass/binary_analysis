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
	int n,m;
	cin>>n;
	if(n!=1)
	{do
	 {
	 if(n%2==0)
	   {m=n/2;
	 cout<<n<<"/2="<<m<<endl;
	 n=m;}
	 else
	{m=n*3+1;
	 cout<<n<<"*3+1="<<m<<endl;
	 n=m;}
	}
	while(n!=1);
	cout<<"End";
	}
	else 
		cout<<"End";
	cin.get();
	cin.get();
	return 0;
 }