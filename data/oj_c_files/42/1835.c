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
	int a[100000], n, k;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	for(int i = 0; i < n; )
		if(a[i] == k)
		{
			for(int j = i; j < n - 1; j++)
				a[j] = a[j + 1];
			n--;
		}
		else
			i++;
	cout << a[0];
	for(int i = 1; i < n; i++)
		cout << " " << a[i];
	cout << endl;
	return 0;
}