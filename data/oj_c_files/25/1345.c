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

int main ()
{
	int N ;
	cin >> N ;
	int num[1000] = {0} ;
	num[999] = 1 ;
	for (int i = 1 ; i <= N ; i ++)
	{
		for (int j = 999 ; j >= 1 ; j --)
		{
			num[j] *= 2 ;
		}
		for (int j = 999 ; j >= 1 ; j --)
		{
			num[j - 1] += num[j] / 10 ;
			num[j] = num[j] % 10 ;
		}
	}
	int b = 0 ;
	while (num[b] == 0)
		  b ++ ;
	for (  ; b <= 999 ; b ++)
		cout << num[b] ;
	
	return 0 ;
}