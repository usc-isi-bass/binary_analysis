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
	char sentence[1000][20];
	int i = 0, i0;
	while(cin >> sentence[i])
	{
			i++;
	}
	i0 = i - 1;
	for (i = 0; i < i0; i++)
	{
		cout << sentence[i] << " ";
	}
	cout << sentence[i];

return 0;
}