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
	int a=0;//??????;
	cin>>a;
	int yushu=0;
	yushu=a%2;
	for(;a!=1;)
	{
	if(yushu==0)
	{
		cout<<a<<"/2="<<(a*0.5)<<endl;
		a=a/2;
		yushu=a%2;
	}
	else 
	{
		cout<<a<<"*3+1="<<(a*3+1)<<endl;
		a=a*3+1;
		yushu=a%2;
	}
	}
	cout<<"End"<<endl;
	return 0;
}