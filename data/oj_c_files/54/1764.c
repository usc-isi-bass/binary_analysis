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

double n, k;
int times = 1;
double apple(double,double,double);
int main()
{
	cin >> n >> k;
	for(times  = 1; ;times++)
	{
		if((int)apple(n,k,n) == apple(n,k,n))
		{
			cout << (int)apple(n,k,n) << endl;
			break;
		}
	}
	return 0;
}
double apple(double i, double j, double t)
{
	if(t == 1)
		return times * n + k;		
	else
	{
		return (n/(n-1)) * apple(i,j,--t) + k;
	}
}