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
	int a[111],i, n = 0;;
	char s[111];
	cin >> s;
	char boy=s[0];
	for (i = 0; s[i]; ++i)
		if (s[i] == boy) a[++n] = i;
		else cout << a[n--] << " " << i << endl;
	return 0;
}