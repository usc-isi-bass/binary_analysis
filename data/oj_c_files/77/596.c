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


int a[100][2];
char c[100];
char b;
int n;

void combine(char c[], int i)
{
	int m, j, k;
	m = strlen(c);
	for(j = 0; j < m; j++)
	{
		if(c[j] != b && c[j] != ' ')
		{
			c[j] = ' ';
			a[i][1] = j;
			for(k = j - 1; k >= 0; k--)
			{
				if(c[k] == b)
				{
					a[i][0] = k;
					c[k] = ' ';
					break;
				}
			}
			break;
		}
	}
	if(i < n / 2 - 1)
		combine(c, i + 1);
}
	

int main()
{
	int j, k, t;
	cin >> c;
	n = strlen(c);
	b = c[0];
	combine(c, 0);
          for(j = 0; j < n / 2; j++)
	{
		cout << a[j][0] << " " << a[j][1] << endl;
	}
	return 0;
}
		

