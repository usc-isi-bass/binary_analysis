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
	int n,i,a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12];
	cin>>n;
	b[0]=12+n;
	if(b[0]%7==5)
	{
		cout<<"1"<<'\n';
	}
	for(i=1;i<=11;i++)
	{
		b[i]=b[i-1]+a[i-1];
		if(b[i]%7==5)
		{
			cout<<i+1<<'\n';
		}
	}
	return 0;
}

