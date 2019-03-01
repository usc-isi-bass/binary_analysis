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
	int renren[100000][2], n, i = 0, j, qun[100000] = {0}, ming[100000] = {0}, flag = 1;
	cin >> n;
	do 
	{
		for (j = 0; j < 2; j ++)
		{
			cin >> renren[i][j];
		}
		i ++;
	}while (renren[i-1][0] != 0 || renren[i-1][1] != 0 );

	for (j = 0; j < i - 1; j ++)
	{
		qun[renren[j][0]] ++;
		ming[renren[j][1]] ++;
	}

	for (j = 0; j < i - 1; j ++)
		if (qun[j] == 0 && ming[j] == n - 1)
		{
			cout << j;
			flag = 0;
		}
	if (j == i - 1 && flag == 1)
			cout << "NOT FOUND";
		return 0;
}