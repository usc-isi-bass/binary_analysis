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
	int a[10000], b[10000];
	int i = 0, j = 1;
	int q;
	char p;
	while(cin >> q)
	{
		a[i++] = q;
		cin >> p;
		if(p != ',')
			break;
	}
	char s[4];
	s[0] = p;
	while(cin >> s[j++])
		if(s[j - 1] == ',')
			break;
	b[0] = atoi(s);
	for(j = 1; j < i - 1; j++)
		cin >> b[j] >> p;
	cin >> b[j];
	q = i;
	cout << q << ' ';
	int sum, max = 0;
	for(i = 0; i < 1000; i++)
	{
		sum = 0;
		for(j = 0; j < q; j++)
			if(i >= a[j] && i < b[j])
				sum++;
		if(sum > max) max = sum;
	}
	cout << max;
	return 0;
}