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

long t(int u)
{
	if(u == 1)
		return 1 ;
	else if(u == 2)
		return 1 ;
	else return (t(u-1)+t(u-2));
}
int main()
{
	int n , u , i;
	cin >> n ;
	for (i = 0 ; i < n ;i++)
	{
		cin >> u ;
		cout << t(u)<<endl ;
	}
	return 0 ;
}
