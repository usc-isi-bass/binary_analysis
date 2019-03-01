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
	int start[1000], end[1000], num = 0, i, j, max = 0, total;
	char c;
	for(num = 1; cin >> start[num - 1], (c = cin.peek() == ','); cin >> c, num++)
		;
	cin >> end[0];
	for(i = 1; i < num; i++)
		cin >> c >> end[i];
	for(i = 0; i < 1000; i++)
	{
		total = 0;
		for(j = 0; j < num; j++)
			if(start[j] <= i && i < end[j])
				total++;
		if(total > max)
			max = total;
	}
	cout << num << ' ' << max;
	return 0;
}
