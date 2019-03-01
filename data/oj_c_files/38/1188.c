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

// ????.cpp : ??????????????
//
//#include "stdafx.h"

int main()
//int _tmain(int argc, _TCHAR* argv[])
{
	int k;
	cin>>k;
	for(int t=0;t<k;t++)
	{
	double a[100],sum=0.0,arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>*(a+i);
		sum+=*(a+i);
	}
	
	arr=sum/n;
	sum=0.0;
	for(int i=0;i<n;i++)
	{
		sum+=(*(a+i)-arr)*(*(a+i)-arr);
	}
	sum=sqrt(sum/n);
	cout<<fixed<<showpoint<<setprecision(5)<<sum<<endl;
	}
	return 0;
}

