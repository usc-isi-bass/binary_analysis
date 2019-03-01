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

int num[100000] = {0};
int f(int n)
{
	if(num[n]>0)
		return num[n];
	else
		return(f(n-1)+f(n-2));
}
int main()
{
	int n;
	cin >> n;
	int a;
	int out;
	num[1] = 1;
	num[2] = 1;
	while(n--)
	{
		cin >> a;
		if(a==1 || a==2)
			cout << 1 << endl;
		else
		{
			out = f(a);
			cout << out << endl;
		}
	}
	return 0;
}