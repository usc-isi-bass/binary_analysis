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
	int n;//??????
	cin>>n;
	int a,b,c;
	a=n%3;
	b=n%5;
	c=n%7;//??n??3?5?7???
	if(a==0&&b==0&&c==0)
		cout<<"3 5 7";
	if(a==0&&b==0&&c!=0)
		cout<<"3 5";
	if(a==0&&b!=0&&c==0)
		cout<<"3 7";
	if(a==0&&b!=0&&c!=0)
		cout<<"3";
	if(a!=0&&b==0&&c==0)
		cout<<"5 7";
    if(a!=0&&b==0&&c!=0)
		cout<<"5";
	if(a!=0&&b!=0&&c==0)
		cout<<"7";
	if(a!=0&&b!=0&&c!=0)
		cout<<"n";
	getchar();
	getchar();
	return 0;
}