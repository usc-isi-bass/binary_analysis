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
	int x,y;
	cin >>x >>y;
	int gen(int, int);           //???????????
	cout <<gen(x,y);
	return 0;
}

int up(int a)           //??a????
{
	int line,k,m;
	m = a;
	for (line=0; m!=0; line++)       //??a????line
		m /= 2;
	k = pow(2.0, line-2) + (a-pow(2.0, line-1))/2;  //???????a????k
	return k;
}
int gen(int a, int b)   //????????a?b?????
{
	if (a == b)          //?a??b?????
		return a;
	if (a > b)           //?a??b??a????up(a)?b???
	{
		a = up(a);
		return gen(a,b);
	}
	if (a < b)            //?b??a???
	{
		 b = up(b);
		 return gen(a,b);
	}
}