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
 * k2.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */
int main()
{
	int n;//??????n
	cin>>n;//??n
	int A,B,C,D,E,F,a,b,c,d;//???????????????
		A=n/100;//????
		a=n%100;
		B=a/50;
		b=a%50;
		C=b/20;
		c=b%20;
		D=c/10;
		d=c%10;
		E=d/5;
		F=d%5;
	cout<<A<<endl;//??
	cout<<B<<endl;
	cout<<C<<endl;
	cout<<D<<endl;
	cout<<E<<endl;
	cout<<F<<endl;
	return 0;//???????????????0?
}
