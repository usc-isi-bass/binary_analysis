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

int k = 0;
void put(int m, int n, int l)  //m??????n?????l????????????? 
{
	int i;
	for (i = l; i <= m; i++)
		if (m - i == 0)  // ???? 
			k++;
		else if (n > 1) // ?? 
			put(m - i, n - 1, i);
}
int main()
{
	int t, m, n;
	cin >> t;
	while (t != 0)
	{
		cin >> m >> n;
		k = 0; // k??0 
	    put(m,n,1);
		cout << k << endl;
		t--;
	}
	return 0;
}
