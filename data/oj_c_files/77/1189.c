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

void Q(char a[])
{
	char c;
	c = a[0];
	int pos[100];
	int i = 0, num = 0;
	do
	{
		if (a[i] == c)
		{
			num++;
			pos[num] = i;
		}
		else
		{
			cout << pos[num] << " " << i << endl;
			num--;
		}
		i++;
	}while (i <= strlen(a) - 1);
}
int main()
{
	char children[100];
	cin >> children;
	Q(children);
	return 0;
}