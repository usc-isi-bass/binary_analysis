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


void result(int a,int b)
{
	if(a==1)
		cout<<"End"<<endl;
	else if(a%2==1)
	{
		cout<<a<<"*3+1="<<a*3+1<<endl;
		result(a*3+1,a);
	    
	}
	else if(a%2==0)
	{
		cout<<a<<"/2="<<a/2<<endl;
		result(a/2,a);
		
	}
}



int main()
{
	int a;
	cin>>a;
	result(a,a);
	return 0;
}

