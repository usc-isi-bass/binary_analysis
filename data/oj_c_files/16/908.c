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
	int n,a[4];
	cin>>n;
	if(n/10==0)
	{
		a[0]=n;
		cout<<a[0]<<endl;
	}
	else if(n/100==0)
	{
		a[0]=n/10;
		a[1]=n%10;
		cout<<a[1]<<a[0]<<endl;
	}
	else if(n/1000==0)
	{
		a[0]=n/100;
		a[1]=n%100/10;
		a[2]=n%100%10;
		cout<<a[2]<<a[1]<<a[0]<<endl;
	}
	else if(n/10000==0)
	{
		a[0]=n/1000;
		a[1]=n%1000/100;
		a[2]=n%1000%100/10;
		a[3]=n%1000%100%10;
		cout<<a[3]<<a[2]<<a[1]<<a[0]<<endl;
	}
	else if(n=10000)cout<<"1"<<endl;
	return 0;
}