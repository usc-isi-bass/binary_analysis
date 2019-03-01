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
	int sum;
	int p;
	cin>>sum;
	p=sum/100;
	cout<<p<<endl;
	sum=sum-100*p;
	p=sum/50;
	cout<<p<<endl;
	sum=sum-50*p;
	p=sum/20;
	cout<<p<<endl;
	sum=sum-20*p;
	p=sum/10;
	cout<<p<<endl;
	sum=sum-10*p;
	p=sum/5;
	cout<<p<<endl;
	sum=sum-5*p;
	p=sum/1;
	cout<<p<<endl;
	return 0;

}