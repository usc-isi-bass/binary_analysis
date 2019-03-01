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
	int n,a[100],*p;
	for(p=a,cin>>n;p<=a+n-1;++p)
		cin>>*p;
	p=p-1;
	cout<<*p;
	for(p=p-1;p>=a;--p)
		cout<<" "<<*p;
	return 0;
}