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

/*
 * ????reverse.cpp
 * ?????1200012840
 * ?????2012-12-13
 * ????????????????????????????8,6,5,4,1?????1,4,5,6,8?
 */



int main()
{
	int n,i,a[102],*p=NULL,*q=NULL,temp;//????
	cin>>n;//??
	for(i=0;i<n;i++)//????
		cin>>a[i];
	for(p=a,q=a+n-1;p<q;p++,q--)//??????
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
	for(p=a;p<(a+n-1);p++)//??
		cout<<*p<<' ';
	p=a+n-1;
	cout<<*p<<endl;
	return 0;//????
}
