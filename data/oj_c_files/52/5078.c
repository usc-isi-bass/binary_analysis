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

/*************************
 ***??:??? 1200012776
 ***????:????
 ***??:2012?12?5?
 *************************/
int n, m, a[100];
void daoxu(int *s, int *e)	//????s???e?????
{
	int temp;
	for (; s < e; s++, e--)
	{
		temp = *s;
		*s = *e;
		*e = temp;
	}
}
int main()
{
	int i, *p = a;
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		cin >> *p++;
	}
	daoxu(a, a + n - m - 1);	//?????????0?n-m-1??,??n-m?n-1??,?????0?n-1??
	daoxu(a + n - m, a + n - 1);
	daoxu(a, a + n - 1);
	p = a;
	cout << *p++;
	for (; p < a + n; p++)
	{
		cout << " " << *p;
	}
	cout << endl;
	return 0;
}

