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
	int n, i, num, count[100] = {0};
	cin >> n ;
	for ( i = 1; i <= n; i++)
	{
		
		cin >> num;
		count[num]++;
		if (i == 1) cout << num;
		if (count[num] == 1 && i >= 2)  cout <<" " <<num;
		
	}

	return 0;
}
