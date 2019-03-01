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

//****************************
//* ??:????            *
//* ?????               *
//* ???12?10?           *
//****************************
void f(int n)
{
	if(n==1)//??n????
		cout<<"End";
	else if(n%2==0)
	{
		cout<<n<<"/2="<<n/2<<endl;
		n=n/2;
		f(n);//???????
	}
	else
	{
		cout<<n<<"*3+1="<<(n*3+1)<<endl;
		n=n*3+1;
		f(n);
	}
}
int main()
{
	int a=0;
	cin>>a;
	f(a);
	return 0;
}