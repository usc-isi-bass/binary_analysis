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
	int a[100];
	int n;
	int *p=a;
	cin>>n;
	for(;p<a+n;p++)
		cin>>*p;
	for(p=a+n-1;p>a;p--)
		cout<<*p<<" ";
	cout<<*p;

}
