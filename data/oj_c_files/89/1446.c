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



const	int	maxn = 1000000+10;

int		know[maxn], known[maxn];
int		n, a, b, i;

int	main()
{
	scanf("%d", &n);
	memset(know, 0, sizeof(know));
	memset(known, 0, sizeof(known));
	while (scanf("%d%d", &a, &b) && (a+b != 0))
	{
		know[a] ++;
		known[b] ++;
	}
	for (i = 0; i < n; i++)
	if (known[i] == n-1 && know[i] == 0)
		cout << i << endl;

	return 0;
}