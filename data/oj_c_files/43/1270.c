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


int judge(int n)
{
	int limit;
	int count = 0;
	
	limit = sqrt(n);
	
	for(int i = 2; i <= limit; i ++)
	{
		if(n % i == 0)
		count = 1;
	}
	
	if(count == 0)
	return 1;
	
	return 0;
}

int main ()
{
	int m;
	
	cin >> m;
	
	for(int i = 3; i <= m / 2; i += 2)
	{
		if(judge(i) == 1 && judge(m - i) == 1)
		cout << i << " " << m - i << endl;
	}
	
	return 0;
	
}