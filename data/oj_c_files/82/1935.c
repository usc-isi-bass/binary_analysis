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

/**
????6
?  ?????
?  ??10.26
?  ??????
*/

int main()
{
	int n, t=0, hours;
	int p1, p2;
	cin >> n;
	hours = t;

	for(int i = 1;i <= n;i++)
	{
		cin >> p1 >> p2;
		if(p1 <= 140 && p1 >= 90 && p2 <= 90 && p2 >= 60)
			t++;
		if(p1 > 140 || p1 < 90 || p2 > 90 || p2 < 60)
		{   
			t=0;
			continue;
		}
		if(t >= hours)
			hours = t;
	}
	cout << hours << endl;
	return 0;
}
		


