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

/*
 * ????.cpp
 *
 *  Created on: 2012-11-28
 *      Author: Lenovo
 */
void f(int n)
{

	if(n==1) return;
	if(n==2)
	{
		cout<<"2/2=1"<<endl;return;
	}
	else
	{
		if((n%2)==1)
		{
			cout<<n<<"*3+1="<<3*n+1<<endl;
			n=3*n+1;
			f(n);
		}
		else
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
			f(n);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	f(n);
	cout<<"End";
	return 0;
}

