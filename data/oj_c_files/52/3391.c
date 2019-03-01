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

//********************************************************
//*  ???1000012846_4.cpp  *****************************
//*  ??:??  ******************************************
//*  ?????2010?12?  *******************************
//*  ?????????  *********************************
//********************************************************
int main()
{
	int n,m,i,a[200]={0};
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	int *p=a+n-1,*q=a+n-m;
	for(i=0;i<n-m;i++)
	{
		p+=1;
		*p=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		cout<<*q<<" ";
		q+=1;
	}
	cout<<*q<<endl;
	return 0;
}
