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
	void f(int);
	int m;
	cin>>m;
	f(m);
	return 0;
}
void f(int m)
{
	if(m==1) 
		cout<<"End";
	else if(m%2==0)
	{   
		cout<<m<<"/2=";
		m=m/2;
		cout<<m<<endl;
		f(m);
	}
	else 
	{
		cout<<m<<"*3+1=";
		m=3*m+1;
		cout<<m<<endl;
		f(m);
	}
}