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
	int max, min, k, day = 0, n, y, m1, m2, i, month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
	cin >> n;
	while (n != 0)
	{
		day = 0;
		cin >> y >> m1 >> m2;
		if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))
			month[2] = 29;
		else
			month[2] = 28;
		max = m1 > m2 ? m1 : m2;
		min = m1 < m2 ? m1 : m2;
		for(i = min; i < max; i++)
			day += month[i];
	if(day % 7 == 0)
		cout << "YES"<<endl;
	else
		cout << "NO"<<endl;	
		n--;
	}

	

	return 0;
}
		
