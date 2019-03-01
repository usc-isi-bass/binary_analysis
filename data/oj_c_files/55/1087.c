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
//* ? ? ?   ?? ? ? ?                           *
//* ? ?      ?? ? ?                              *
//* ? ? ? ??2010 ? 11 ? 24 ?                   * 
//* ? ?      ?1000010185                            *
//****************************************************** 
int main()
{
	int a, b, dec = 0, l, k = 1, j = 0;
	char n[32], nb[32];
	cin >> a >> n >> b;
	l = strlen(n);
	for (int i = l - 1; i >= 0; i --)
	{
		if (n[i] >= '0' && n[i] <= '9')
			dec += (n[i] - '0') * k;
		if (n[i] >= 'a' && n[i] <= 'z')
			dec += (n[i] - 'a' + 10) * k;
		if (n[i] >= 'A' && n[i] <= 'Z')
			dec += (n[i] - 'A' + 10) * k;
		k *= a;
	}
	do
	{
		if (dec % b <= 9)
			nb[j ++] = dec % b + '0';
		else
			nb[j ++] = dec % b - 10 + 'A';
		dec /= b;
	} while (dec != 0);
	for (int i = j - 1; i >= 0; i --)
		cout << nb[i];
	return 0;
}
	