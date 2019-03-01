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

int len;
char a, b;
char ren[100];
void run(char ren[100])
{
	int i, j;
	for (i = 0; i < len; i++)
		if (ren[i] == b)
		{
			for (j = i - 1; j >= 0; j--)
				if(ren[j] == a)
				{
					cout << j << " " << i << endl;
					ren[i] = 0;
					ren[j] = 0;
					break;
				}
		}
}
int main()
{
	cin.getline(ren,100);
	len = strlen(ren);
	a = ren[0];
	b = ren[len - 1];
	run(ren);
	return 0;
}
