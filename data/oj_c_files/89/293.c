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

const int N = 1000000;
int cnt[N] = {0};
int main()
{
	int n;
	cin >> n ;
	int a, b;
	int ans = -1;
	while (true)
	{
		cin >> a >> b;
		if ( a == 0 && b == 0) break;
		cnt[b]++;
		if (cnt[b] == n-1)
			ans = b;
	}
	if (ans == -1)
		cout << "NOT FOUND" << endl;
	else
		cout << ans << endl;
}