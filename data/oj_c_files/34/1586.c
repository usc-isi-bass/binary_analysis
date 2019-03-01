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
    int m,n;
	cin>>n;
	m=n;
	if(n==1)cout<<"End"<<endl;
    else
	{
	for(;m!=1;)
	{
		if(n%2==1)
		{
	    n=m*3+1;
        cout<<m<<"*3+1="<<n<<endl;
		m=n;
		}
		else 
		{n=m/2;
		cout<<m<<"/2="<<n<<endl;
		m=n;
		}
	}
	cout<<"End"<<endl;
	}
	return 0;
}