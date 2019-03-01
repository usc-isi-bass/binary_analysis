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
	int n;
	cin>>n;
	if((n>=1)&&(n<=9))cout<<n<<endl;
	if((n>=10)&&(n<100))
	{
		int a=n/10;
		int b=n%10;
		cout<<b<<a<<endl;
	}
	if((n>=100)&&(n<=999))
	{
		int a=n/100;
		int b=(n%100)/10;
		int c=(n%100)%10;
		cout<<c<<b<<a<<endl;
	}
	if((n>=1000)&&(n<9999))
	{
		int a=n/1000;
		int b=(n%1000)/100;
		int c=((n%1000)%100)/10;
		int d=((n%1000)%100)%10;
		cout<<d<<c<<b<<a;
	}
	return 0;
}