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

void mode(int x, int y) {
	int num1[100], num2[100], num3[200];
	int i, j, k;
	for (i = 0; i < x; i++)
		cin >> num1[i];
	for (j = 0; j < x - 1; j++)
		for (k = 0; k < x - 1 - j; k++)
			if (num1[k] > num1[k + 1])
				swap(num1[k], num1[k + 1]);
	for (i = 0; i < y; i++)
		cin >> num2[i];
	for (j = 0; j < y - 1; j++)
		for (k = 0; k < y - 1 - j; k++)
			if (num2[k] > num2[k + 1])
				swap(num2[k], num2[k + 1]);
	for (i = 0; i < x; i++)
		num3[i] = num1[i];
	for (i = x; i < (x + y); i++)
		num3[i] = num2[i - x];
	for (i = 0; i < x + y - 1; i++)
		cout << num3[i] << " ";
	cout << num3[x + y - 1];
}
int main() {
	int x, y;
	cin >> x >> y;
	mode(x, y);
	return 0;
}

