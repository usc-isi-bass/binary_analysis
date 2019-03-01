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
	int hundred,fifty,twenty,ten,five,one;
	cin >> n;
	hundred=n/100;
	fifty=n%100/50;
	twenty=n%50/20;
	ten=n%50%20/10;
	five=n%10/5;
	one=n%5;
	cout << hundred << endl << fifty << endl << twenty << endl << ten << endl << five << endl << one;
	return 0;
}
