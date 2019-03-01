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

int reverse(int num);
int main()
{
	int n;
	while (cin >>n)
	{
	   if (n<0) {cout <<"-";n=-n;}
	   while (n%10==0&&n!=0)
	     n=n/10;
       reverse(n);
	}

	return 0;
}
int reverse(int num)
{
    cout <<num%10;
	if (num/10!=0)
		reverse(num/10);
	else cout <<endl;
	return 0;
}