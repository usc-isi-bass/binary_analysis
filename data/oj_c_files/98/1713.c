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
	char word[50], *p = NULL;
	int n, k = 0, sum = 0, len, f = 1;
	cin >> n;
	while(k < n)
	{
		cin >> word;
		p = word;
		len = strlen(p);
		if(f == 1)
		{
			cout << word;
			sum = len;
			k++;
			f = 0;
			continue;
		}
		if(sum + 1 + len > 80)
		{
			cout << endl << word;
			sum = len;
			k++;
			continue;
		}
		if(sum + 1 + len <= 80)
		{
			cout << " " << word;
			sum = sum + 1 + len;
			k++;
			continue;
		}
	}
	return 0;
}