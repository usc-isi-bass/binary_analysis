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

void f(int n);              //????; 
int main()                  //???;
{
	int n;
	cin >> n;
	f(n);
	return 0;
}
void f(int n)
{
	if(n==1)               //?????1?????"End";
		cout << "End" << endl;
	else
	{
		if(n%2==1)             //????????3?1;
		{
			cout << n << "*" << 3 <<"+" << 1 << "=" <<3*n+1 << endl;
			n=3*n+1;
			f(n);
		}
		else if(n%2==0)       //?????????2?????????????????; 
		{
			cout << n << "/" << 2 << "="<< n/2 << endl;
			n=n/2;
			f(n);
		}
	}
	return;
}