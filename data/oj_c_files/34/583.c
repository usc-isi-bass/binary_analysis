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

void ji(int m)
{
	cout<<m<<"*3+1="<<m*3+1<<endl;
}
void ou(int m)
{
	cout<<m<<"/2="<<m/2<<endl;
}
void f(int m)
{
	if(m==1) ;
	else{
	if(m%2==0)
		{
			ou(m);
			f(m/2);
	}
	else
		{
			ji(m);
			f(m*3+1);
	}
	}
}
int main()
{
	int n;
	cin>>n;
	f(n);
	cout<<"End"<<endl;
	return 0;
}