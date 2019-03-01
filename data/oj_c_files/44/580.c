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


void input();
void reverse();
void output();

int i,j,k, in[7] = {0}, out[7] = {0};

int main ()
{
	input();

	reverse();

	output();

	return 0;
}



void input()
{
	for (i = 1; i <=6; i++)
		cin >> in[i];
}

void reverse()
{
	int negative = 0;
	for (i = 1; i <=6; i++)
	{
		negative = 0;
		if (in[i] == 0)
			continue;
		if (in[i] < 0 )
		{
			negative = 1;
			in[i] = -in[i];
		}
		while (in[i] != 0)
		{
			out[i] = out[i]*10+in[i]%10;
			in[i] /= 10;
		}
		if (negative == 1)
			out[i] = -out[i];
	}
}

void output()
{
	for (i = 1; i <= 6; i++)
		cout << out[i] << endl;
}
