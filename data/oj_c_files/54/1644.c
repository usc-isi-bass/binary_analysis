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

int n, k, i, m;
int N = INT_MAX;   
int total(int number, int sur)
{
	if ( number == n )
		return i;
	if ( total(number+1, sur) != 0 && total(number+1, sur) % (n-1) == 0 )
		return n*total(number+1, sur)/(n-1) + k;
	return 0; 
}
int main()
{
	cin >> n >> k; 
	for (i = n+k; i < N; i += n) 
	{	
		m = total(1, i);
		if (m != 0)
			break; 
	}
	cout << m << endl; 
	return 0; 
}