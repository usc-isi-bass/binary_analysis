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

/* title :????*
* author : ???*
* time : 2011.11.9 */


char c[100];
char boy;
int n, current;

int tell(int num)
{
	int num2;
	if(num == n - 1)
		return num;
	if(c[num] == boy)
	{
		num2 = tell(num + 1);
		while(num2 == -1)
			num2 = tell(current + 1);
		cout << num << " " << num2 << endl;
		return -1;
	}
	else
	{
		current = num;
		return num;
	}
}


int main()
{
	int m;
	cin >> c;
	boy = c[0];
	n = strlen(c);
	m = tell(0);
	return 0;
}

