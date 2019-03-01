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

//????
//2010?12?03?
//1000012753 ???
int deal(int num, int p)
{
	int i, sum = 0;
	if(num == 1)
		return 1;
	for(i = p; i <= num; ++i)
		if(num % i == 0)
			sum += deal(num / i, i);
	return sum;
}
int main()
{
	int n, a;
	cin >> n;
	while(n--)
	{
		cin >> a;
		cout << deal(a, 2) << endl;
	}
	return 0;
}  
