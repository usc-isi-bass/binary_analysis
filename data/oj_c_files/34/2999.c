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

int temp(int x)//????

{
	if(x%2==1)
	{
	cout<<x<<"*3+1="<<x*3+1<<endl;
	return x*3+1;
	}
	else
	{
	cout<<x<<"/2="<<x/2<<endl;
	return x/2;
	}
}
int main()
{
	int n;
	cin>>n;
	while(n!=1)
	{
		n=temp(n);
	}
	cout<<"End"<<endl;
	getchar();
	getchar();
	return 0;
}