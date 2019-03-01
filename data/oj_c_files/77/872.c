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


char m[100];
int num = 0;
int q = 0;

void search(int a, int b, char boy, char girl)
{
	if (num == (b + 1) / 2)
		return;
	int i, t;
	for (i = a; i < b; i++)
	{
		if (m[i] == boy)
		{
			for (t = i + 1; t < b; t++)
			{
				if (m[t] != '.')
				{
					break;
				}
			}
			if (m[t] == girl)
			{
				num ++;
				m[i] = '.';
				m[t] = '.';
				break;
			} 
		}
	}
	cout << i << " " << t << endl;
    search(a, b, boy, girl);
}

int main()
{
    char boy, girl;
	int len;
	cin >> m;
	len = strlen(m);
	boy = m[0];
	girl = m[len - 1];
	search(0,len - 1, boy, girl);
	return 0;
}