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


char boy;
void calculate (char children[]);

int main()
{
	char children[101];
	cin >> children;
	boy = children[0];
	calculate(children);

	return 0;
}

void calculate (char children[])
{
	int b, g, i;
	for (i = 0; children[i] != '\0'; i++)
	{
		if (children[i] == boy)
			b = i;
		if (children[i] != boy && children[i] != 1)
		{
			g = i;
			cout << b << " " << g << endl;
			children[b] = children[g] = 1;
			calculate (children);
			break;
		}
	}
}