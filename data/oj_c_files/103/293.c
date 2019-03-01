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
	char text[1000];
	cin >> text;
	int index[40] = {0}, count[40] = {0}, temp = 1, len, sort = 0;
	len = strlen(text);
	int i,j,k;

	for (i = 1; i < len; i++)
	{
		if (toupper(text[i]) != toupper(text[i-1]))
		{
			count[sort] = temp;
			sort++;
			index[sort] = i;
			temp = 1;
		}
		else
			temp ++;
	}
	count[sort] = temp;

	for (i = 0; i <= sort; i++)
	{
		cout << "(" << (char)toupper (text[index[i]]) << "," << count[i] << ")";
	}
	cout << endl;

	return 0;
}