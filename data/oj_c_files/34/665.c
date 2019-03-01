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

int fun(int m);                                       //??????
int a;                                                //??????
int main()
{
	int n;
	cin>>n;
	a = n; 
	if(n == 1)
		cout<<"End"<<endl;                 //?????1,???End
	else
	{
		while(fun(a) != 1)                //?????1,?????fun()??,???1??
			fun(a);
		cout<<"End"<<endl;
	}
	return 0;
}
int fun(int m)                                      //?????
{
	if(m % 2 != 0)
	{
		a = m * 3  + 1;
		cout<<m<<"*3+1="<<a<<endl;
		return a;
	}
	else
	{
		a = m / 2;
		cout<<m<<"/2="<<a<<endl;
		return a;
	}
}

