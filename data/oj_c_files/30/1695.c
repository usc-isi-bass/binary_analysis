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
	int a, b, i, j, k, s;

	cin >> a;
	s = 0;
	for(i = 1;i <= a;i ++)
	{
		k = 0; 
		if(i % 7 == 0)
			k ++;
		b = i;
		while(b != 0)
		{
			j = b % 10;
			if(j == 7)
				k ++;
			b = b / 10;
		}
		if(k == 0)
			s = s + i * i;
	}
	cout << s << endl;

	return 0;
}