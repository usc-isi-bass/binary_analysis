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

void fun(char, int);
char a, b;
char s[100];
int main()
{
	int n, i;
	cin >> s;
	n = strlen(s);
	a = s[0];
	b = s[n - 1];
	for(i = 0; i < n; i++)
	{
		fun(s[i],i);
	}
	return 0;
}
void fun(char c, int i)
{
	int k, j = 0;
	if(c == a)
		return;
	else
	{
		for(k = 1;; k++)
		{
			if(s[i - k] == a)
			{
				if(j == 0)
				{
				    cout << i - k << " " << i << endl;
					break;
				}
				else
					j--;
			}
			else
				j++;
		}
	}
	return;
}
