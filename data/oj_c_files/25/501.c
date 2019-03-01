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
	int N, i, j, num = 1;
	int s[101] = {0};
	cin >> N;
	s[0] = 1;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < num; j++)
		{
			s[j] = s[j] * 2;
		}
		for (j = 0; j < num; j++)
		{
			if (s[j] >= 10) 
			{
				s[j] -= 10;
				s[j+1]++;
			}
		}
		if (s[num] == 1) num++;
	}
	for (i = num - 1; i >= 0; i--)
		cout << s[i];
	return 0;
}