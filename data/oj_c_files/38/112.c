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
	int k, i, len[101];
	double *q = NULL;
	double s[101], a[101], sum[101] = {0}, qsum[101] = {0}, p[1000];
	cin >> k;
	for(i = 0; i < k; i++)
	{
		cin >> len[i];
		q = p;
		for( ; q < p+len[i]; q++)
		{
			cin >> *q;
			sum[i] += *q;
			qsum[i] += (*q) * (*q);
		}
		a[i] = sum[i] / len[i];
		qsum[i] -= len[i] * a[i] * a[i];
		s[i] = sqrt(qsum[i] / len[i]);
		cout << fixed << setprecision(5) << s[i] << endl;
	}
	return 0;
}