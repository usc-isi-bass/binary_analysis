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
	int money=0,a=0;
	cin>>money;
	a=money/100;
	cout<<a<<endl;
	money=money%100;
	a=money/50;
	cout<<a<<endl;
	money=money%50;
	a=money/20;
	cout<<a<<endl;
	money=money%20;
	a=money/10;
	cout<<a<<endl;
	money=money%10;
	a=money/5;
	cout<<a<<endl;
	money=money%5;
	cout<<money;
	return 0;
}