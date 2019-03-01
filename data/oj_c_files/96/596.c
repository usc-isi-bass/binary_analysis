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

int main()
{
	int i = 0, j, k, count = 0, product[100] = {0}, remainder, numerator, left = 0;
	char num[100] = {0};
	do
	{
		cin.get(num[i]);
		i++;
	}
	while(num[i - 1] != '\n');
	for (j = i - 2; j >= 0; j -= 6)
		count += (num[j] - 48);
	for (j = i - 3; j >= 0; j -= 6)
		count += (num[j] - 48) * 10;
	for (j = i - 4; j >= 0; j -= 6)
		count += (num[j] - 48) * 100;
	for (j = i - 5; j >= 0; j -= 6)
		count -= (num[j] - 48);
	for (j = i - 6; j >= 0; j -= 6)
		count -= (num[j] - 48) * 10;
	for (j = i - 7; j >= 0; j -= 6)
		count -= (num[j] - 48) * 100;
	remainder = count % 13;
	numerator = (num[0] - 48) * 10 + (num[1] - 48);
	for (k = 0; k < i - 2; k++)
	{
		product[k] = floor(numerator / 13);
		left = numerator - 13 * product[k];
		numerator = left * 10 + (num[k + 2] - 48);
	}
	if ((product[0] == 0) && (product[1] == 0))
		cout << "0" << endl;
	if (product[0] != 0)
	{
		cout << product[0];
		for (k = 1; k < i - 2; k++)
			cout << product[k];
		cout << endl;
	}
	if ((product[0] == 0) && (product[1] != 0))
	{
		for (k = 1; k < i - 2; k++)
			cout << product[k];
		cout << endl;
	}
	cout << remainder << endl;
	return 0;
}