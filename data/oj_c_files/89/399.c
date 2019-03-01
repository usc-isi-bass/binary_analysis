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

//****************************************************** 
//* ? ? ?   ?? ? ? ? ? ?                     *
//* ? ?      ?? ? ?                              *
//* ? ? ? ??2010 ? 12 ? 8 ?                    * 
//* ? ?      ?1000010185                            *
//****************************************************** 
int main()
{
	int a[10000] = {0}, b[10000] = {0}, x, y, n; // ??a[i]??i?????????b[i]??i??????
	cin >> n;
	while (cin >> x >> y)
	{
		if (x == y)
			break;
		a[x] = 1; // x?????
		b[y]++; // y???????1
	}
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == 0 && b[i] == n - 1) // ?i????????n-1???
		{
			cout << i;
			break;
		}
	if (i == n)
		cout << "NOT FOUND";
	return 0;
}