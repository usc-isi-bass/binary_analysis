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
	int length = 0, a[110] = {0};
	cin >> length;
	for(int i = 0; i < length; i ++)
		cin >> a[i];
	int sec = 1;
	int point = 0;
	while(point + sec < length)
	{
		while(point + sec < length)
		{
			if(a[point] < a[point + sec])
			{
				int temp = a[point];
				a[point] = a[point + sec];
				a[point + sec] = temp;
			}
			point = point + sec * 2;
		}
		sec = sec * 2;
		point = 0;
	}
	cout << a[0] << endl;
	sec = sec / 4;
	if(a[sec] > a[sec * 2])
		cout << a[sec] << endl;
	else
		cout << a[sec * 2] << endl;
	return 0;
}