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

//????010.cpp
//??????
//?????2013?10?27?
//?????


int main()
{
	int a[100];
	int i,n;
	cin>>n;
	for(i=0;i<n;i=i+1)
	{
		cin>>a[n-1-i];
	}
	for(i=0;i<n;i=i+1)
	{
		cout<<a[i];
		if(i==n-1)
			break;
		cout<<' ';
	}
	return 0;
}

