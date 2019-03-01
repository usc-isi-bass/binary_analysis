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

char a[max];
char b[251],c[251];
void panduan(int i)
{
	int k, l;
	if (2 * i > strlen(a))return;
	for (int j = 0; 2 * i + j <= strlen(a); j++)
	{
		for ( k = 0; k < i; k++)b[k] = a[j + k];
		b[k] = '\0';
		for (l = 0; l < i; l++)c[l] = a[j + i * 2 - 1 - l];
		c[l] = '\0';
		if (strcmp(b, c) == 0){
			cout << b;
			for (int x = strlen(c) - 1; x >= 0; x--)cout << c[x];
			cout << endl;
		}

	}
	panduan(i + 1);
}
int main()
{
	cin >> a;
	panduan(1);
	
}