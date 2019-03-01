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
	int n,h,l;
	cin>>n;
	h=n/100;
	l=n%100;
	cout<<h<<endl;
	h=l/50;
	l=l%50;
	cout<<h<<endl;
    h=l/20;
	l=l%20;
	cout<<h<<endl;
	h=l/10;
	l=l%10;
	cout<<h<<endl;
	h=l/5;
	l=l%5;
	cout<<h<<endl;
	h=l/1;
	l=l%1;
	cout<<h<<endl;
    return 0;
}