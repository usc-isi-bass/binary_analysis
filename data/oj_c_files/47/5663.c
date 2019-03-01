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


int data[1000] = {0};
int n = 0, m = 0;

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> data[i];
	for(int i = 1; i <= n / 2; i++)
	{
		int j = data[i];
		data[i] = data[n - i + 1];
		data[n - i + 1] = j;
	}
	cout << data[1];
	for(int i = 2; i <= n; i++) cout << ' ' << data[i];
}	