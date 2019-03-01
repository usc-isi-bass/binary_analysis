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
	int n,a[10];
	cin>>n;
	a[0]=n%10;                      //:????
	a[1]=(n%100)/10;            //:????
	a[2]=(n%1000)/100;   //:????
	a[3]=(n%10000)/1000;  //:????
	if (n<10 && n>=0)           //:?n???????
		cout<<n;
	else if(n<100 && n>=10)
		cout<<a[0]<<a[1];
	else if (n<1000 && n>=100)
		cout<<a[0]<<a[1]<<a[2];
	else if (n<10000 && n>=1000)
		cout<<a[0]<<a[1]<<a[2]<<a[3];
	else if (n==10000)
		cout<<"00001";
	return 0;
}